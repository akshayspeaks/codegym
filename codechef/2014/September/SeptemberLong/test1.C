#include <stdio.h>

int main()
{
	int a,b,i,t;
	for(i=0;i<10;i++)
	{
		scanf("%d%d",&a,&b);
		t=a%b;
		printf("%d",t);
	}
}