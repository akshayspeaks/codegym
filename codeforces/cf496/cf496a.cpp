#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int n,i,dif=0,mindif,flag,temp,ele,last,arr[200];
	scanf("%d%d",&n,&ele);
	for(i=1;i<n;i++)
	{
		last=ele;
		scanf("%d",&ele);
		arr[i]=ele-last;
		if(arr[i]>dif)
		{
			dif=arr[i];
		}
	}
	flag=0;
	for(i=1;i<n-1;i++)
	{
		temp=arr[i]+arr[i+1];
		if(temp<=dif)
		{
			flag=3;
			break;
		}
		else
		{
			if(flag==0)
			{
				flag=1;
				mindif=temp;
			}
			else
			{
				if(temp<mindif)
				{
					mindif=temp;
				}
			}
		}
	}
	if(flag==3)
	cout<<dif;
	else
	cout<<mindif;
	return 0;
}