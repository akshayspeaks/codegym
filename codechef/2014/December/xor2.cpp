#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int arr[1003];
int n;

int solve(int k)
{
	int pos=1,i;
    
    while(pos<=arr[0])
    pos<<=1;
    
    pos>>=1;
    
    for(int t=0;pos>=1;pos>>=1)
    {
            int i=t;
            while(i<n &&(arr[i]&pos)==0)
            i++;
            
            if(i>=n)
            continue;
            
            swap(arr[t],arr[i]);
            
            for(int j=0;j<n;++j)
            {
                    if(j!=t && (arr[j]&pos)!=0)
                    arr[j]=arr[j]^arr[t];
            }
            
            t++;
            
    }
    
    int ans=k;
   
    for(i=0;i<n;i++)
    {
            if((ans^arr[i])>ans)
            ans=ans^arr[i];
    }
	return ans;
}

/*int mxreplace(int k)
{
	int max=-1,ind;
	int i;
	for(i=0;i<n;i++)
	{
		if((arr[i]^k)>max)
		{
			max=arr[i]^k;
			ind=i;
		}
	}
	arr[ind]=max;
	return 2;
}*/

int main()
{
	int t,k,i,ele;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		for(i=0;i<n;i++)
		{
			scanf("%d",&ele);
			arr[i]=ele;
		}
		sort(arr,arr+n,greater<int>());
		//for(i=n-1;i>=0;i--)
		//printf("%d ",arr[i]);
		//i=mxreplace(k);
		//cout<<endl;
		//for(i=n-1;i>=0;i--)
		//printf("%d ",arr[i]);
		i=solve(k);
		cout<<i<<endl;
		
	}
	return 0;
}