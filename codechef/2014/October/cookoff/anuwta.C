#include <stdio.h>
 
int main(void)
{
	int t;
	long long int n,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		printf("%lld\n",(n+((n*(n+1))/2)));
		//printf("%lld\n",ans);
	}
	return 0;
}