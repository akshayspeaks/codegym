#include <stdio.h>


int main()
{
	int ang,i,j,N,M,arr[100][100];
	scanf("%d%d",&N,&M);
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	while(M--)
	{
		scanf("%d",&ang);
		ang=ang%360;
		if(ang==90)
		{
			for(j=0;j<N;j++)
			{
				for(i=N-1;i>=0;i--)
				{
					printf("%d ",arr[i][j]);
				}
				printf("\n");
			}
		}
		else if(ang==180)
		{
			for(i=N-1;i>=0;i--)
			{
				for(j=N-1;j>=0;j--)
				{
					printf("%d ",arr[i][j]);
				}
				printf("\n");
			}
		}
		else if(ang==270)
		{
			for(j=N-1;j>=0;j--)
			{
				for(i=0;i<N;i++)
				{
					printf("%d ",arr[i][j]);
				}
				printf("\n");
			}
		}
		else
		{
			for(i=0;i<N;i++)
			{
				for(j=0;j<N;j++)
				{
					printf("%d ",arr[i][j]);	
				}
				printf("\n");
			}
		}
		printf("\n");
	}

}