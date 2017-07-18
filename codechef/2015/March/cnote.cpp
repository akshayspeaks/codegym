#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int t,x,y,k,n,i,fl,p,c;
	cin>>t;
	while(t--)
	{
		scanf("%d%d%d%d",&x,&y,&k,&n);
		fl=0;
		x-=y;
		for(i=0;i<n;i++)
		{
			scanf("%d%d",&p,&c);
			if((p>=x)&&(c<=k))
			{
				fl=1;
				//break;
			}
		}
		if(fl)
		printf("LuckyChef\n");
		else
		printf("UnluckyChef\n");
	}
	return 0;
}