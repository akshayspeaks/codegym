#include <stdio.h>

int main()
{
	int T,n;
	long long int oc;
	char ch;
	scanf("%d",&T);
	while(T--)
	{
		scanf("\n%d\n",&n);
		oc=0;
	//	scanf("%c",&ch);
	//	printf("%c",ch);
		while(n--)
		{
			scanf("%c",&ch);
			//printf("%c",ch);
			if(ch=='1')
			oc++;
		}
		printf("%lld\n",(oc*(oc+1))/2);
	}
	return 0;
}
