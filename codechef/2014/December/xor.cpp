#include <cstdio>
#include <algorithm>

using namespace std;

int arr[1003];
int n;

int solve()
{
	int i,pos=0,temp=1,flag;
	while(arr[n-1]>=temp)
	{
		temp<<1;
		pos++;
	}
	for(i=n-1;i>-1;i--)
	{
		flag=0;
		//pos wali postion pe 1 hai ya 0 check karke XOR karne ke liye
		for(j=i-1;j>-1;j--)
		{
			if(arr[j]>>pos-1)
			{
				flag=1;
				arr[j]=arr[j]^arr[i];
			}
		}
		sort(arr,arr+i); //swapping done

		pos--;

	}


	//Now remains the task to manipulate maximum XOR
}


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
			arr[i]=ele^k;
		}
		sort(arr,arr+n);
		for(i=n-1;i>=0;i--)
		printf("%d ",arr[i]);
		
	}
	return 0;
}