#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

int main()
{
	int t,f,s,n,ai;
	cin>>t;
	while(t--)
	{
		f=s=1000000000;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>ai;
			if(ai<f)
			{
				s=f;
				f=ai;
			}
			else if(ai<s)
			{
				s=ai;
			}
		}
		cout<<(f/gcd(f,s))*s<<endl;
	}
	return 0;
}