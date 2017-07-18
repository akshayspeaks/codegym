#include <stdio.h>

int main()
{
	int T,n,m,d,max,i,weight;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d%d",&n,&m);
		max=0; weight=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&d);
			if(d>max)
			{
				weight+=(d-max)*i;
				max=d;
			}
			else
			{
				weight+=(max-d);
			}
		}
		if((m-weight)%n==0)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}