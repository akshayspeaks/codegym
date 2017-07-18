#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
using namespace std;

long long int gcd(long long int a, long long int b) {
    return (b == 0) ? a : gcd(b, a % b);
}

bool hasPrimeDiv(long long int a,long long int b)
{
	if(b==1)
	return true;
	long long int d=gcd(a,b);
	if(d==1)
	return false;
	return hasPrimeDiv(a,b/d);
}


int main()
{
	int t;
	long long int a,b;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld",&a,&b);
		if(hasPrimeDiv(a,b))
		printf("Yes\n");
		else
		printf("No\n");
	}
	return 0;
}