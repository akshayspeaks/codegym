#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long int a,b,c,n;
	cin>>n>>a>>b>>c;
	switch(4-(n%4))
	{
		case 4:cout<<0;
		break;
		case 1:cout<<min(a,3*c);
		break;
		case 2:cout<<min(2*a,min(b,2*c));
		break;
		default:cout<<min(min(a+b,min(3*a,3*b+a)),c);
	}
	cout<<endl;
	return 0;
}