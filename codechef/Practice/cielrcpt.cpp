#include <cstdio>
using namespace std;

int main()
{
	int t,p,count;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d",&p);
		count=p/2048;
		p=p%2048;
		while(p)
		{
			count+=p&1;
			p>>=1;
		}
		printf("%d\n",count);
	}
	return 0;
}