#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,i,l,h,arr[100000]={0};
		scanf("%d%d",&n,&m);
		for (i=0;i<n;i++)
		{
			scanf("%d%d",&l,&h);
			for(int j=l;j<=h;j++)
			arr[j]+=1;
		}
		long long int mxsum=0;
		/*for(i=0;i<n;i++)
		cout<<arr[i]<<" ";*/
		for(i=0;i<m;i++)
		mxsum+=arr[i];
		long long int sm=mxsum;
		for(i=m;i<n;i++)
		{
			sm+=arr[i];
			sm-=arr[i-m];
			if(sm>mxsum)
			{
				mxsum=sm;
			}
		}
		long long int ans=(n*m)-mxsum;
		cout<<ans<<endl;
	}
	return 0;
}