#include <iostream>
using namespace std;

int main()
{
	long long int a,b,s,sum;
	cin>>a>>b>>s;
	if(a<0)
	a=a*-1;
	if(b<0)
	b=b*-1;
	sum=a+b;
	if(s>=sum && (s-sum)%2==0)
	{
		cout<<"Yes";
	}
	else
	cout<<"No";
	return 0;
}