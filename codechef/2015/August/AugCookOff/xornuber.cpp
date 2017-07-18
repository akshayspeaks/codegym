#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int t;
	long long int n,ans;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n==1)
		ans=2;
		else if((n+1)&n)
		{
			ans=-1;
		}
		else
		{
			ans=n>>1;
		}
		printf("%lld\n",ans);
	}
	return 0;
}