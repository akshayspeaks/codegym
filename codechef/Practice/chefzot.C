#include <stdio.h>

int main()
{
	int T,N,max=0,count=0;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&N);
		if(N==0)
		{
			if(max<count)
				max=count;
			count=0;
		}
		else count++;
	}
	if(max<count)
		max=count;
	printf("%d",max);
	return 0;
}