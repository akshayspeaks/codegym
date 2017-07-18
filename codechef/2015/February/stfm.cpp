#include <cstdio>

using namespace std;


int fact(long long int x,int m)
{
	if(x==0 || x==1)
	{
		return 1;
	}
	else
	{
		return ((x%m)*fact(x-1,m))%m;
	}
}

int main()
{
	int t,n,m,sum,temp;
	long long int p;
	scanf("%d%d",&n,&m);
	sum=0;
	for(int i=0;i<n;i++)
	{
		scanf("%lld",&p);
		temp=fact(p,m);
		//printf("%d\t",temp);
		sum=(sum+temp)%m;
		t=(p);
		temp=(((t*t)+((t*t)*t))/2)%m;
		//printf("%d\n",temp);
		sum=(sum+temp)%m;
	}
	printf("%d",sum);
	return 0;
}
