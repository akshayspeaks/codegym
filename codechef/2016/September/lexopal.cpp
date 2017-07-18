#include <bits/stdc++.h>

using namespace std;

#define ict int t; cin>>t; while (t--)


string getValidPalinString(string fadedPalin)
{
	int len=fadedPalin.length();
	for (int i=0;i<=len/2;i++)
	{
		if(fadedPalin.at(i)==fadedPalin.at(len-i-1))
		{
			if(fadedPalin.at(i)=='.')
				fadedPalin[i]=fadedPalin[len-i-1]='a';
			continue;
		}
		else if(fadedPalin.at(i)=='.')
		{
			fadedPalin[i]=fadedPalin.at(len-i-1);
		}
		else if(fadedPalin.at(len-i-1)=='.')
		{
			fadedPalin[len-i-1]=fadedPalin.at(i);
		}
		else
		{
			// cout<<"Ho gyi na chutiyapa at"<<i<<" or "<<len-i-1<<endl;
			return "";
		}
	}
	return fadedPalin;
}

int main()
{
	ict
	{
		string fadedPalin;
		cin>>fadedPalin;
		string res=getValidPalinString(fadedPalin);
		if(res.empty())
			cout<<-1<<endl;
		else
			cout<<res<<endl;
	}
	return 0;
}