#include <stdio.h>
//using namespace std;

int main()
{
	int t;
	long long int n,m,temp,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		temp=n;
		while(n--)
		{
			scanf("%lld",&m);
		}
		ans=((temp)*(temp-1))/2;
		printf("%lld\n",ans);
	}
	return 0;
}