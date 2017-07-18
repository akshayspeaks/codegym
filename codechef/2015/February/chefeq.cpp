#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int t,ele,max,elemax,n;
	scanf("%d",&t);
	while(t--)
	{
		int i,arr[100003]={0};
		scanf("%d",&n);
		elemax=0;
		max=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&ele);
			arr[ele]++;
			if(elemax<ele)
			elemax=ele;
		}
		for(i=1;i<=elemax;i++)
		{
			if(arr[i]>max)
			max=arr[i];
		}
		printf("%d\n",n-max);
	}
	return 0;
}