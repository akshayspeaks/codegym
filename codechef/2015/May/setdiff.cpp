#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#define M 1000000007
using namespace std;

/*long long int po(int i)
{
	if(i==1)
	return 2;
	else
	return ((po(i-1)%M)*2)%M;
}*/


int main()
{
	int t,n,i;
	long long int sum,temp,po,num,array[100003];
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			scanf("%lld",&array[i]);
		}
		sort(array,array+n);
		sum=0;
		po=2;
		for(i=1;i<n;i++)
		{
			//temp=(((i*(i+1))/2)*((array[i]+array[n-i-1])%M))%M;
			//po=((1<<i)-1)%M;
			temp=(((po-1)%M)*(array[i]-array[n-i-1]))%M;
			sum=(sum+temp)%M;
			po=(po*2)%M;
		}
		printf("%d\n",sum);
		//array.clear();
	}
	return 0;
}