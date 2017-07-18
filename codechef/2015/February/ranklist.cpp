#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	
	long long int t,num,mxrank,sum;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&num,&sum)		
		sum-=num;
		mxrank=1;
		while(sum>=mxrank)
		{
			sum-=mxrank;
			mxrank++;
		}
		printf("%lld\n",num-mxrank);
	}
	return 0;
}