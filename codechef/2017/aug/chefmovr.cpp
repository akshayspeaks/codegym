#include <bits/stdc++.h>

using namespace std;

long long int getSuperSum(vector<long long int>&arr, long long int len, long long int skip){
	long long int s=0;
	for(int i=0;i<len;i+=skip)
		s+=arr[i];
	return s;
}

long long int getMods(vector<long long int> &arr, long long int avg, long long int start, long long int len, long long int skip)
{
	long long int jumps=0,sums=0,j_bal=0;
	long long int steps=0;
	for(long long int i=start;i<len;i+=skip)
	{
		j_bal+=avg-arr[i];
		jumps+=abs(j_bal);
		sums+=arr[i];
		steps++;
	}
	if ((avg*steps)!=sums || j_bal!=0)
		return -1;
	else
		return jumps;
}

int main(){
	int t;
	long long int superSum,res,el,n,d,i,j,avg;
	vector<long long int> arr;
	cin>>t;
	while(t--){
		scanf("%lld%lld",&n,&d);
		arr.resize(n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&arr[i]);
		}
		superSum=getSuperSum(arr,n,d);
		//cout<<superSum<<endl;
		j=((n-1)/d)+1;
		avg=superSum/j;
		//cout<<"superSum , j and avg -> "<<superSum<<" "<<j<<" "<<avg<<endl;
		if(superSum%j!=0){
			cout<<-1<<endl;
			continue;
		}
		res=0;
		for (i=0;i<d;i++)
		{
			el=getMods(arr,avg,i,n,d);
			if(el==-1){
				res=-1;
				break;
			}
			else
				res+=el;
		}
		cout<<res<<endl;
	}
	return 0;
}
