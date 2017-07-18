#include <stdio.h>

int main()
{
	int t,n,m,ind,i,first,last;
	scanf("%d",&t);
	while(t--)
	{
		last=0;
		scanf("%d%d",&n,&m);
		first=n-1;
		for(i=0;i<m;i++)
		{
			scanf("%d",&ind);
			if(ind>last)
			last=ind;
			if(ind<first)
			first=ind;
		}
		//printf("%d %d\n",last,first);
		for(i=last;i>(last-first)/2;i--)
		{
			printf("%d ",i);
		}
		for(i=(last-first+1)/2;i<n-first-1;i++)
		printf("%d ",i);
		printf("%d\n",n-first-1);
	}
	return 0;
}
