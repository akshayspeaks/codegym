#include <bits/stdc++.h>
using namespace std;

bool pairCompare(const pair<int, int> &firstElem, const pair<int, int> &secondElem) {
  return firstElem.first < secondElem.first;
}

int main() {
	int n,d,m,fr;
	scanf("%d%d",&n,&d);
	vector < pair<int,int> > vec;
	while(n--)
	{
		scanf("%d%d",&m,&fr);
		pair <int,int> p=make_pair(m,fr);
		vec.push_back(p);
	}
	sort(vec.begin(),vec.end(),pairCompare);
	vector < pair<int,int> >::iterator it1,it2;
	//for(it1=vec.begin();it1<vec.end();++it1)
	//cout<<"First: "<<(*it1).first<<" Second: "<<(*it1).second<<endl;
	it1=it2=vec.begin();
	long long int maxfr=fr=0;
	while(it2!=vec.end() and it1!=vec.end())
	{
		if((*it2).first-(*it1).first<d)
		{
			fr+=(*it2).second;
			//cout<<fr;
			if(maxfr<fr)
			maxfr=fr;
			++it2;
		}
		else
		{
			fr-=(*it1).second;
			//cout<<" FR "<<fr<<endl;
			++it1;
		}
	}
	printf("%I64d",maxfr);
	return 0;
}