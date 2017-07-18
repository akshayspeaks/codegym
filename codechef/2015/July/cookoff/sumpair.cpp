#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int main(){
	// your code goes here
	int t,n,d,i,ele;
	scanf("%d",&t);
	while(t--)
	{
		vector<int> narr;
		scanf("%d%d",&n,&d);
		for(i=0;i<n;i++)
		{
			scanf("%d",&ele);
			narr.push_back(ele);
			
		}
		sort(narr.begin(),narr.end());
		/*for(i=0;i<narr.size();i++)
		printf("%d ",narr[i]);*/
		long long sum=0;
		for(i=narr.size()-1;i>0;i--)
		{
			if((narr[i]-narr[i-1])<d)
			{
				//printf("Summing %d and %d at position %d %d\n",narr[i],narr[i-1],i,i-1);
				sum+=narr[i]+narr[i-1];
				i--;
				//printf("From index %d now\n",i-1);
			}
		}
		printf("%lld\n",sum);
	}
	return 0;
}