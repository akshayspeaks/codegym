#include <stdio.h>

int main()
{
	int digit_flaws[10]={2,7,2,3,3,4,2,5,1,2},n,ans=1,nod=2;
	scanf("%d",&n);
	while(nod--)
	{
		ans*=digit_flaws[n%10];
		n/=10;
	}
	printf("%d",ans);
	return 0;
}