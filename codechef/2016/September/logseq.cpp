#include <bits/stdc++.h>

using namespace std;

#define ict int t; cin>>t; while (t--)
#define rep(i,n) for (ll i=0;i<n;i++)

int main()
{
	ict
	{
		string st;
		cin>>st;
		int oc=0,zc=0;
		for (int i=0;i<st.length();i++)
		{
			if(st[i]=='1')
				oc++;
			else
				zc++;
		}
		if(oc==1 || zc==1)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
}