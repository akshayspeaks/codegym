#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
	int t,n,sx,sy,ex,ey,bx,by,ans;
	scanf("%d",&t);
	while(t--)
	{
		
		scanf("%d%d%d%d%d%d%d",&n,&sx,&sy,&ex,&ey,&bx,&by);
		if(((sx==ex==bx)&&((by<ey&&by>sy)||(by>ey&&by<sy))) || (sy==ey==by)&&((bx<ex&&bx>sx)||(bx>ex&&bx<sx)))
		{
			ans=abs(ex-sx)+abs(ey-sy)+2;
		}
		else
		{
			ans=abs(ex-sx)+abs(ey-sy);
		}
		printf("%d\n",ans);
	}
	return 0;
}