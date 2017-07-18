#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int t,n,fl,i,sum,x,prev;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		sum=0;
		scanf("%d",&prev);
		fl=0;
		for(i=1;i<n;i++)
		{
			scanf("%d",&x);
			if(x!=prev)
			{
				if(fl==1)
				sum++;
				else
				{
					fl=1;
					sum+=2;
				}
			}
			else
			fl=0;
			prev=x;
		}
		printf("%d\n",sum);
		
	}
	return 0;
}