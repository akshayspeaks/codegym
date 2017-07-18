#include <stdio.h>
#include <math.h>
int main(void)
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int l,d,s,c;
		double ans;
		scanf("%lld%lld%lld%lld",&l,&d,&s,&c);
		ans=s*pow(1+c,d-1);
		//printf("%lf",&ans);
		if(ans>=l)
		printf("ALIVE AND KICKING\n");
		else
		printf("DEAD AND ROTTING\n");
	}
	return 0;
}
