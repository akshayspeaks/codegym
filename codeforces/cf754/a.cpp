#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t,el,sm=0,az=0,i;
	vector<int> arr;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>el;
		if(el!=0)
			az=0;
		arr.push_back(el);
		sm+=el;
	}
	if(sm!=0)
	{
		cout<<"YES"<<endl;
		cout<<1<<t<<endl;
	}
	else
	{
		if(az)
			cout<<"NO"<<endl;
		else
		{
			i=t-1;
			while(arr[i]==0)
				i--;
			cout<<"YES"<<endl<<2<<endl<<1<<" "<<i<<endl<<i+1<<" "<<t<<endl;
		}
	}
	return 0;
}