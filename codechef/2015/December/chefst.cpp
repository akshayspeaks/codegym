#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	long long int a,b,m,mx;
	while(t--)
	{
		scanf("%lld%lld%lld",&a,&b,&m);
		if(a>b)
		{
			long long tp=b;
			b=a;
			a=tp;
		}
		mx=(m*(m+1))/2;
		if(mx>=a)
		{
			cout<<(b-a)<<endl;
		}
		else
		cout<<(b+a-(2*mx))<<endl;
	}
	
	return 0;
}