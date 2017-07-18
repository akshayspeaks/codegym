#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n,ele,arr[10003],negcnt=0,tot=0,k,fill=0,ans=0;
	cin>>n;
	while(n--)
	{
		cin>>ele;
		if(ele<0)
		{
			tot+=ele;
			arr[negcnt++]=ele;
		}	
	}
	sort(arr,arr+negcnt);
	cin>>k;
	while(k<negcnt)
	{
		ans+=k;
		tot-=k;
		fill++;
		if(fill+arr[negcnt]==0)
			negcnt--;
	}
	ans+=tot;
	cout<<ans<<endl;
	return 0;
}