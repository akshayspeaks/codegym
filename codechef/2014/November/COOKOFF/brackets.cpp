#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;


int main()
{
	int t,i,bal,mxbal,len;
	char a[100001];
	cin>>t;
	while(t--)
	{
		scanf("%s",&a);
		len=strlen(a);
		bal=mxbal=0;
		for(i=0;i<len;i++)
		{
			if(a[i]=='(')
			bal++;
			else
			bal--;
			mxbal=mxbal>bal?mxbal:bal;
		}
		for(i=0;i<mxbal;i++)
		putchar('(');
		for(i=0;i<mxbal;i++)
		putchar(')');
		cout<<endl;
	}
	return 0;
}