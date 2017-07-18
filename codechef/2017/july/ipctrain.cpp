#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int t,n,d,di,ti,si,i;
	long long int soln,tot;
	map <long long int,long long int, greater<long long int>> saveMyAss;
	vector <pair<long long int,pair<long long int,long long int>>> dpts;
	vector <pair<long long int,pair<long long int,long long int>>>::iterator it;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld%lld",&n,&d);
		tot=0;
		for (i=0;i<n;i++){
			scanf("%lld%lld%lld",&di,&ti,&si);
			dpts.push_back(make_pair(di,make_pair(ti,si)));
			tot+=si*ti;
		}
		sort(dpts.begin(),dpts.end());
		for (i=1;i<=d;i++){
			while(!dpts.empty() && dpts[0].first==i){
			//while(dpts[0].first==i){
				//it=dpts.begin();
				saveMyAss[dpts[0].second.second]+=dpts[0].second.first;
				dpts.erase(dpts.begin());
			}
			if(!saveMyAss.empty()){
				saveMyAss.begin()->second=saveMyAss.begin()->second-1;
				tot-=saveMyAss.begin()->first;
				if(saveMyAss.begin()->second==0)
					saveMyAss.erase(saveMyAss.begin());
			}
			
		}
		cout<<tot<<endl;
		dpts.clear();
		saveMyAss.clear();
	}
}
