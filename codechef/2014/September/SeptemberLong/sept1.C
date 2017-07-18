#include <stdio.h>
#include <string.h>
long long bigMod(long long a, long long k, long long M)
{
	if(k==0)
	{
		return 1;
	}
	if(k&1)
	{
		return (((a%M)*(bigMod(a,k-1,M)))%M);
	}
	else
	{
		long long c=bigMod(a,k/2,M);
		return (c*c)%M;
	}
}

long long int mulInv(int a, long long int b)
{
	long long int b0=b,t,q,x0=0,x1=1;
	if(b==1)
		return 1;
	while(a>1)
	{
		q=a/b;
		t=b,b=a%b,a=t;
		t=x0;
		x0=x1-q*x0;
		x1=t;
	}
	if(x1<0)
		x1+=b0;
	return x1;
}

int main()
{
	int T,pos,len,i;
	long long int efac,ofac,M=1000000007,inv3;
	char inp[1000000];
	scanf("%d",&T);
    inv3=mulInv(5040,M);
    printf("%d\n",inv3);
	while(T--)
	{
		scanf("%s",inp);
		pos=1;
		len=strlen(inp);
		for(i=1;i<=len;i++)
		{
			if(inp[i-1]=='l')
				pos=(pos-1)*2+1;
			else
				pos*=2;

		}
		if (len%2==1)
		{
		    //efac=((pow(4,(len+1)/2)-4)/3)+(pos*2);
			efac=((((bigMod(4,(len+1)/2,M)-4)%M)*inv3)%M);
			efac=(efac+((pos)%M*2)%M)%M;
			printf("%lld\n",efac);
		}
		else
        {
            ofac=((2*((((bigMod(4,len/2,M)-4)%M)*inv3)%M))%M+1)%M;
            ofac=(ofac+((pos)%M*2)%M)%M;
            printf("%lld\n",ofac);
        }
	}
	return 0;
}
