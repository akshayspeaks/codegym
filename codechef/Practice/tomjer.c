#include <stdio.h>

int main(void)
{
	int t,h,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&h);
		ans=1;
		ans=(ans<<h-1)%1000;
		printf("%d\n",ans);
	}
	return 0;
}