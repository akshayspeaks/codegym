#include <iostream>
#include <cstdio>
using namespace std;
int mod(int a, int b)
{ return (a%b+b)%b; }
int main()
{
	int n,f,i,x,fl=1;
	scanf("%d",&n);
	scanf("%d",&f);
	f=n-f;
	for(i=1;i<n;i++)
	{
		scanf("%d",&x);
		if(i&1)
		{
			if(mod(x-f,n)!=i)
			{
				fl=0;
			}
		}
		else
		{
			if(mod(x+f,n)!=i)
			{
				fl=0;
			}
		}
	}
	if(fl)
	printf("Yes");
	else
	printf("No");
	return 0;
}