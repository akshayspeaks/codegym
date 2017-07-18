#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int t,n,i,num,small,flag;
	long long int sum;
	scanf("%lld",&t);
	while(t--)
	{
		flag=0;
		sum=0,small=10000;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&num);
			if(small>num)
			{
				small=num;
			}
			if(num<2)
			{
				flag=1;
				//break;
			}
			else sum+=num;
		}
		if(flag==1)
		printf("-1\n");
		else
		printf("%lld\n",sum-small+2);
	}
	return 0;
}