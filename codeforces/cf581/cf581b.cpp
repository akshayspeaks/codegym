#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int arr[100000],mx[100000],i,n;
	scanf("%d",&n);
	for(i=0;i<n;++i)
	{
		int ele;
		scanf("%d",&ele);
		arr[i]=ele;
	}
	mx[n-1]=arr[n-1];
	for(i=n-2;i>-1;--i)
	{
		mx[i]=max(mx[i+1],arr[i]);
	}
	unordered_set<int> s(arr, arr + n);

    for(i=0;i<n;i++)
	{
		if(mx[i]>arr[i] || mx[i]==mx[i+1])
		cout<<mx[i]-arr[i]+1<<" ";
		else
		{
			cout<<mx[i]-arr[i]<<" ";
		}
	}
	return 0;
}