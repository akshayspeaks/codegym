#include <bits/stdc++.h>
using namespace std;

void printMap(map<long long int,long long int,greater<long long int>> &mp){
	long long int soln=0;
		for (map<long long int,long long int>::iterator it=mp.begin(); it!=mp.end();++it ){
			soln+=it->first*it->second;
		}
		cout<<soln<<endl;
}

int main(){
	long long int t,n,d,di,ti,si,i,days;
	map <long long int,long long int,greater<long long int>> mp;
	vector <pair<long long int,pair<long long int,long long int>>> dpts;
	vector <pair<long long int,pair<long long int,long long int>>>::iterator it;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld%lld",&n,&d);
		for (i=0;i<n;i++){
			scanf("%lld%lld%lld",&di,&ti,&si);
			dpts.push_back(make_pair(di,make_pair(ti,si)));
		}
		sort(dpts.begin(),dpts.end());
		dpts.push_back(make_pair(d+1,make_pair(0,0)));
		for (i=0;i<n;i++){
			days=dpts[i+1].first-dpts[i].first;
			mp[dpts[i].second.second]+=dpts[i].second.first;
			while(!mp.empty() && days>0){
				if(mp.begin()->second>days){
					mp.begin()->second-=days;
					days=0;
				}
				else{
					days-=mp.begin()->second;
					mp.erase(mp.begin());
				}
			}
		}

		printMap(mp);
		mp.clear();
		dpts.clear();
	}
}
