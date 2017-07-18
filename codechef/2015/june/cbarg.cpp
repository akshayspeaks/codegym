#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int t,n,ele,pre;
	long long int sum;
	scanf("%d",&t);
	while(t--)
	{
		pre=0;
		sum=0;
		scanf("%d",&n);
		while(n--)
		{
			scanf("%d",&ele);
			if(pre<ele)
			sum+=ele-pre;
			pre=ele;
		}
		printf("%lld\n",sum);
	}
	return 0;
}