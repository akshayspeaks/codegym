#include <bits/stdc++.h>

using namespace std;

int main(){
	int t,n,m,el,i,j,bestYet,rojgarCount;
	long long int sal;
	vector<long long int> exp;
	vector<pair<long long int,int>> comp;
	set<int> hired;
	string bin;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&m);
		exp.resize(n);
		for (i=0;i<n;i++)
			scanf("%lld",&exp[i]);
		comp.push_back(make_pair(0,0));
		for (i=0;i<m;i++){
			scanf("%lld%d\n",&sal,&el);
			comp.push_back(make_pair(sal,el));
		}
		rojgarCount=0;//admit it.....
		sal=0;
		for (i=0;i<n;i++){
			cin>>bin;
			bestYet=0;
			for(j=1;j<=m;j++){
				if( (bin[j-1]=='1') and (exp[i]<=comp[j].first) and (comp[j].second>0) ){
					//vaild offer
					if(comp[bestYet].first<comp[j].first)
						bestYet=j;
				}
			}
			if(bestYet!=0){
				rojgarCount++;//.....you didn't see that coming
				//cout<<"offer for "<<i+1<<": by company "<<bestYet<<" offering salary: "<<comp[bestYet].first<<endl;
				sal+=comp[bestYet].first;
				comp[bestYet].second--;
				hired.insert(bestYet);
			}
		}
		cout<<rojgarCount<<" "<<sal<<" "<<m-hired.size()<<endl;
		comp.clear();
		hired.clear();

	}
	return 0;
}
