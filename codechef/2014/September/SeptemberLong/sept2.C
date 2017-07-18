#include <stdio.h>

int main()
{
	int arr[100000],i,n,ind,m,d,rotindex=0;
	char in;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%c",&in);
	while(m--)
	{
		scanf("%c%d",&in,&d);
		if(in=='C')
		{
			rotindex+=d;
		}
		else if(in=='A')
		{
			rotindex-=d;
		}
		else
		{
			ind=d+rotindex-1;
			if(ind>=n)
				ind-=n;
			printf("%d\n",arr[ind]);

		}
		if(rotindex<0)
			rotindex+=n;
		scanf("%c",&in);
	}
	return 0;
}