#include <bits/stdc++.h>

using namespace std;
void ds(string msg,set<char>&cset){
	cout<<msg<<endl;
	for (set<char>::iterator st=cset.begin();st!=cset.end();++st)
		cout<<*st<<" ";
	cout<<"-----------------------\n";
}
int main(){
	int tests,n,i;
	string s,t;
	vector<int> aVisited;
	set<char> aset,bset,amto;
	set<char>::iterator sitrt,fitrt;
	scanf("%d\n",&tests);
	while(tests--){
		cin>>s>>t;
		n=s.size();
		aVisited.assign(26,0);
		for(int i=0;i<n;i++){
			if(aVisited[s[i]-'a']++){
				amto.insert(s[i]);
			}
			else{
				aset.insert(s[i]);
			}
			bset.insert(t[i]);
		}
		//ds("set amto",amto);
		//ds("set aset",aset);
		//ds("set bset",bset);
		sitrt=amto.begin();
		while(true){
			if(sitrt==amto.end())
				break;
			else if (bset.find(*sitrt)==bset.end())
				break;
			sitrt++;
		}
		//sitrt!=amto.end() is preq#2 for a winning
		//sitrt!=amto.end()?cout<<"true\n":cout<<"false\n";

		fitrt=bset.begin();
		while(true){
			if(fitrt==bset.end())
				break;
			else if(aset.find(*fitrt)==aset.end())
				break;
			fitrt++;
		}

		if(sitrt!=amto.end() or (fitrt==bset.end() and aset.size()>bset.size())){
			cout<<"A\n";
		}
		else
			cout<<"B\n";

		aset.clear();
		bset.clear();
		amto.clear();
	}	
	return 0;
}
