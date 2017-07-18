#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b)
{
    int t;
    while(b != 0)
    {
        t = a;
        a = b;
        b = t%b;
    }
    return a;
}

bool areCoprime(int a,int b)
{
	return gcd(a,b)==1;
}

int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,el;
		cin>>n;
		vector<int> dp(n,0);
		vector<pair<int,int>> tr;
		vector<pair<int,int>>::iterator it;
		for(i=0;i<n;i++)
		{
			cin>>el;
			it=tr.begin();
			bool flag_entered=false;
			while(it!=tr.end())
			{
				if(!areCoprime((*it).first,el))
				{
					(*it).first=el;
					(*it).second++;
					dp[i]=max((*it).second,dp[i]);
					flag_entered=true;
				}
				it++;
			}
			if(!flag_entered)
			{
				tr.push_back(make_pair(el,1));
			}
		}

		for(vector<int>::iterator itt=dp.begin();itt<dp.end();itt++)
		{
			cout<<*itt<<" ";
		}
		cout<<endl;
	}
	return 0;
}