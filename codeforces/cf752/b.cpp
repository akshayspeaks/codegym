#include <bits/stdc++.h>

using namespace std;

int main()
{
	string st,jt;
	cin>>st;
	cin>>jt;
	std::vector<pair<char,char>> ch_pairs;
	bool invalid=false;
	int visited[26]={0};
	int i;
	for (i=0;i<st.length();i++)
	{
		if (st[i]!=jt[i])
		{
			if(visited[st[i]-'a']==0 && visited[jt[i]-'a']==0)
			{
				visited[st[i]-'a']=jt[i]-'a'+1;
				visited[jt[i]-'a']=st[i]-'a'+1;
				// cout<<"visited[st[i]-'a'] "<<visited[st[i]-'a']<<" and ";
				// cout<<"visited[jt[i]-'a'] "<<visited[jt[i]-'a']<<endl;
				ch_pairs.push_back(make_pair(st[i],jt[i]));
			}
			else if(visited[jt[i]-'a']!=st[i]-'a'+1)
			{
				invalid=true;
				ch_pairs.clear();
				break;
			}
		}
		else
		{
			visited[st[i]-'a']=st[i]-'a'+1;
		}
	}
	if(invalid)
		cout<<-1<<endl;
	else
		cout<<ch_pairs.size()<<endl;
	for(i=0;i<ch_pairs.size();i++)
		cout<<ch_pairs[i].first<<" "<<ch_pairs[i].second<<endl;
	/*for(i=0;i<26;i++)
	{
		cout<<visited[i]<<" ";
	}*/
	return 0;
}