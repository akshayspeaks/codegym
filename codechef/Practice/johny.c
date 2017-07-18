#include <stdio.h>

int main()
{
	int t,n,i,k,count;
	long long int arr[100];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);			
		}
		scanf("%d",&k);
		count=1;
		for(i=0;i<n;i++)
		{
			if(arr[k-1]>arr[i])
			count++;
		}
		printf("%d\n",count);
	}
	return 0;
}
