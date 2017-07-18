#include <stdio.h>

int main(void)
{
	int t;
	long long int n,k,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld %lld",&n,&k);
		ans=((n*(n-1)*(n-2))-(k*(k-1)*(k-2)))/6;
		printf("%lld\n",ans);
	}
	return 0;
}
