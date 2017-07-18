#include <stdio.h>

int isFibo(long long int n)
{
	long long int a,b,temp;
	a=0;b=1;
	while(a+b<=n)
	{
		if(a+b==n)
		return 1;
		
		temp=b;
		b+=a;
		a=temp;
	}
	return 0;
}

int main(void)
{
	int t;
	long long int n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		if(isFibo(n))
		printf("is fibo\n");
		else
		printf("not fibo\n");
	}
	return 0;
}
