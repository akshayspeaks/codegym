#include <bits/stdc++.h>

using namespace std;

int main()
{
	string st;
	int n,steps,it;
	cin>>n>>steps;
	cin>>st;
	int g,i;
	g=st.find('G');
	i=st.find('T');
	if(g>i)
	{
		int t=g;
		g=i;
		i=t;
	}
	// cout<<"G n I"<<g<<" "<<i<<endl;
	for(it=g;it<i;it+=steps)
	{
		if(st.at(it)=='#')
		{
			break;
		}
	}
	if(it==i)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}