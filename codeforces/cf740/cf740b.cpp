#include <bits/stdc++.h>

using namespace std;

int main()
{
	int arr[103];
	int n,m;
	cin>>n>>m;
	arr[0]=0;
	for(int i=1;i<=n;i++)
	{
		int el;
		cin>>el;
		arr[i]=arr[i-1]+el;
	}
	int soln=0;
	for(int i=0;i<m;i++)
	{
		int l,r;
		cin>>l>>r;
		soln+=max(0,arr[r]-arr[l-1]);
		
	}
	cout<<soln<<endl;
	return 0;
}