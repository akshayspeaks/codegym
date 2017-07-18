#include<stdio.h>
int isprime[2003];

int main()
{
	int i,j;
	isprime[0]=isprime[1]=1;
	for(i=2;i<45;i++)
		if (isprime[i]==0)
		{
			for(j=i*i;j<2003;j+=i)
			{
			isprime[j]=1;
			}
		}
	int t,x,y,z;
	scanf("%d",&t);    
	while(t--)
	{
		scanf("%d %d",&x,&y);
		for(i=x+y+1;i<=2003;i++)
		{
			if(isprime[i]==0)
			{
				z=i-x-y;
				break;
			}
		}
        printf("%d\n",z);
    }
    return 0;
}