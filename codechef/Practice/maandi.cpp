#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

int isOvlk(int n)
{
	while(n>0)
	{
		if((n%10==4)||(n%10==7))
		{
			
			return 1;
		}
		n/=10;
	}
	return 0;
}

int solve(int n)
{
	int i,count=0;
	for(i=1;i<=sqrt((double)n);i++)
	{
		if(n%i==0)
		{
			
			if(isOvlk(i))
			{
				count++;
			}
			if(i!=n/i)
			{
				
				if(isOvlk(n/i))
				{
					count++;
				}
			}
		}
	}
	return count;
}

int main()
{
	int t;
	int n;
	cin>>t;
	while(t--)
	{
		//scanf("%lld",&n);
		cin>>n;
		printf("%d\n",solve(n));
	}
	return 0;
}