#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int t,n,k,i,ele;
	long long int sum;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%d",&ele);
			if(ele<k)
			{
				sum+=(k-ele);
			}
			else
			{
				sum+=min(ele%k,k-(ele%k));
			}
		}
		printf("%lld\n",sum);
	}
	return 0;
}