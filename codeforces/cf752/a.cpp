#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,m,k,ln;
	cin>>n>>m>>k;
	ln=(k+1)/2;
	cout<<((ln+m-1)/m)<<" "<<((ln-1)%m)+1<<" ";
	if(k&1)
		cout<<"L"<<endl;
	else
		cout<<"R"<<endl;
	return 0;
}