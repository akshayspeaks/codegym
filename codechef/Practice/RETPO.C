#include <stdio.h>
void swap(long long int *a,long long int *b)
{
	long long int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

int main()
{
	int t,fl;
	long long int x,y,ans;
	scanf("%d",&t);
	while(t--)
	{
		fl=0;
		scanf("%lld%lld",&x,&y);
		if(x<0)
		x*=-1;
		if(y<0)
		y*=-1;
		if(x>y)
		{
			swap(&x,&y);
			fl=1;
		}
		ans=x*2;
		if((y-x)%2==0)
		ans+=(y-x)*2;
		else
		{
			ans+=((y-x)*2)-1;
			if(fl==1)
			ans+=2;
		}
		
		printf("%lld\n",ans);
	}
	return 0;
}
