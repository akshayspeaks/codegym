#include <stdio.h>
#include <cstdio>
int main(void)
{
	int t;
	long long int n,m,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&n,&m);
		if(m<=(n/2))
		ans=m+(n/2);
		else
		ans=m-(n/2);
		printf("%lld\n",ans);
	}
	return 0;
}
