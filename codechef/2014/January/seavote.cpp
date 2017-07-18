#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int t,n,b,min,m,i;
	scanf("%d",&t);
	while(t--)
	{
		min=0;
		scanf("%d",&n);
		m=n;
		for(i=0;i<m;i++)
		{
			scanf("%d",&b);
			if(b!=0)
			{
				min+=b-1;
			}
			else n--;
		}
		if((min<100)&&(min+n-100<n)&&((min+n>=100)))
		cout<<"YES"<<endl;
		els
e		cout<<"NO"<<endl;
	}
	return 0;
}