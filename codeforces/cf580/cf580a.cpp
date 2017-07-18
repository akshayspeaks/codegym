#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,mx=0,count=1,ele,prev;
	scanf("%d",&n);
	scanf("%d",&prev);
	n--;
	while(n--)
	{
		scanf("%d",&ele);
		if(ele>=prev)
		count++;
		else
		{
			if (count>mx)
			mx=count;
			count=1;
		}
		prev=ele;
	}
	if(count>mx)
	mx=count;
	cout<<mx;
	
	return 0;
}