#include <stdio.h>
#include <stdlib.h>
long long int arr[3];
int comp (const void * elem1, const void * elem2) 
{
    int f = *((int*)elem1);
    int s = *((int*)elem2);
    if (f > s) return  1;
    if (f < s) return -1;
    return 0;
}

int main(void)
{
	int T,r,g,b,m,i;
	long long int num;
	scanf("%d",&T);
	while(T--)
	{
		arr[0]=arr[1]=arr[2]=0;
		scanf("%d%d%d%d",&r,&g,&b,&m);
		for(i=0;i<r;i++)
		{
			scanf("%lld",&num);
			if(num>arr[0])
			arr[0]=num;
		}
		for(i=0;i<g;i++)
		{
			scanf("%lld",&num);
			if(num>arr[1])
			arr[1]=num;
		}
		for(i=0;i<b;i++)
		{
			scanf("%lld",&num);
			if(num>arr[2])
			arr[2]=num;
		}
		qsort(arr,3,sizeof(*arr),comp);
		for(i=0;i<m;i++)
		{
			arr[2]/=2;
			if(arr[2]>=arr[1])
			continue;
			qsort(arr,3,sizeof(*arr),comp);
		}
		qsort(arr,3,sizeof(*arr),comp);
		printf("%lld\n",arr[2]);
	}
	return 0;
}