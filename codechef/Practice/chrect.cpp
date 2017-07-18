#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int t,n,m,k,tem,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d",&n,&m,&k);
		if(m<n)
		swap(n,m);
		if(n==1)
		{
			if(m>2)
			ans=k;
			else
			ans=0;
		}
		else
		{
			ans=(k+1)/2;
		}
		printf("%d\n",ans);
	}
	return 0;
}