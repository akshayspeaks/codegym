#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

int main()
{
	// your code goes here
	int t,i,flag,mf,len;
	char str[100003];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",&str);
		len=strlen(str);
		flag=mf=0;
		for(i=0;i<len;i++)
		{
			if(flag==0)
			{
				flag=1;
				if(str[i]=='+')
				{
					mf++;
				}
			}
			else
			{
				flag=0;
				if(str[i]=='-')
				{
					mf++;
				}
			}
		
		}
		if(mf<=(len/2))
		printf("%d\n",mf);
		else
		printf("%d\n",len-mf);
	}
	
	
	return 0;
}