#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int t,n,b,res,q,i,numer;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld%lld",&n,&b);
		res=n%b;
		q=n/b;
		numer=(q-1)*b-res;
		i=numer/(2*b);
		if(numer>=0)
			i++;
		cout<<(q-i)*(res+(i*b))<<endl;
	}
}
