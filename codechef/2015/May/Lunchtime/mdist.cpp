#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int i,k,l,r,q,n,arr[2][100003];
	char ch;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&arr[0][i],&arr[1][i]);
	}
	scanf("%d",&q);
	while(q--)
	{
		scanf("\n%c",&ch);
		if(ch=='Q')
		{
			int maxxpy,maxxmy=0;
			int minxpy,minxmy=1000000;
			int p,m,p1,p2,p3,p4;
			scanf("%d%d",&l,&r);
			for(i=l;i<=r;i++)
			{
				p=arr[0][i]+arr[1][i];
				m=abs(arr[0][i]-arr[1][i]);
				if(p>maxxpy)
				{
					maxxpy=p;
					p1=i;
				}
				if(p<minxpy)
				{
					minxpy=p;
					p2=i;
				}
				if(m>maxxmy)
				{
					maxxmy=m;
					p3=i;
				}
				if(m<minxmy)
				{
					minxmy=m;
					p4=i;
				}
			}
			int d1=abs(arr[0][p1]-arr[1][p2])+abs(arr[1][p1]-arr[1][p2]);
			int d2=abs(arr[0][p3]-arr[1][p4])+abs(arr[1][p3]-arr[1][p4]);
			int ans=max(d1,d2);
			printf("%d\n",ans);
		}
		else
		{
			scanf("%d%d%d",&i,&l,&r);
			arr[0][i]=l;
			arr[1][i]=r;
		}
	}
	return 0;
}