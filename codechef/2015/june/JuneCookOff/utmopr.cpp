#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int t,n,k,ele,i;
	long long int sum=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%d",&ele);
			sum+=ele;
		}
		if(sum&1)
		{
			printf("even\n");
		}
		else
		{
			if(k==1)
			printf("odd\n");
			else
			printf("even\n");
		}
	}
	
	return 0;
}