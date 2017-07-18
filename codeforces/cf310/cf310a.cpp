#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main()
{
	int n,i,no=0;
	char c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("\n%c",&c);
		if(c=='1')
		no++;
		
	}
	printf("%d",abs(no-(n-no)));
	return 0;
}