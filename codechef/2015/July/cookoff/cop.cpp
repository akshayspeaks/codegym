#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int t,m,x,y;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&m,&x,&y);
		int i,cop_index,hc,hcflag;
		vector <int> carr;
		for(i=0;i<m;i++)
		{
			scanf("%d",&cop_index);
			carr.push_back(cop_index-1);
		}
		sort(carr.begin(),carr.end());
		hc=0;
		x=x*y;
		for(i=0;i<carr.size()-1;i++)
		{
			if((carr[i+1]-carr[i]-1)>=(2*x))
			hc+=carr[i+1]-carr[i]-(2*x)-1;
		}
		if(carr[0]>=x)
		hc+=carr[0]-x;
		if((99-carr[carr.size()-1])>=(x))
		hc+=(99-carr[carr.size()-1])-(x);
		printf("%d\n",hc);
	}
	return 0;
}