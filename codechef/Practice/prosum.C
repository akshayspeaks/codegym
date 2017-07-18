#include <stdio.h>
int main()
{
	int T,temp,t,toc,zoc,cnt;
	long long int N,pairs;
	scanf("%d",&T);
	while(T--)
	{
		cnt=zoc=toc=0;
		scanf("%lld",&N);
		pairs=N*(N-1)/2;
		t=N;
		while(t--)
		{
			scanf("%d",&temp);
			if(temp==0||temp==1)
			{
				pairs-=N-1-zoc;
				zoc++;				
			}
			if(temp==2)
			toc++;
		}
		pairs-=toc*(toc-1)/2;
		printf("%lld\n",pairs);
	}
	return 0;
}