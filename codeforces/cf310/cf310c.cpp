#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int n,k,i,m,j;
	long long int cost=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&m);
		int prev, ele,fl=1,count=1;
	
		scanf("%d",&prev);
	
		for(j=1;j<m;j++)
		{
			scanf("%d",&ele);
			if(fl==1)
			{
				if(ele!=(prev+1))
				{
					fl=0;
				}
				else
				count++;
				prev++;
				
			}
		}
		cost+=(m-count)*2;
	}
	
	cost+=k-1;
	cout<<cost;
	return 0;
}