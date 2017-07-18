#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	long long int i,t,n,pack,ele;
	long long int k,bal;
	cin>>t;
	while(t--)
	{
		scanf("%lld%lld",&n,&k);
		pack=1;
		bal=k;
		for(i=0;i<n-1;i++)
		{
			scanf("%lld",&ele);
			if(ele>bal)
			{
				ele-=bal;
				pack++;
				pack+=ele/k;
				bal=k-(ele%k);
				if((ele%k)!=0)
				bal--;
			}
			else if(ele==bal)
			{
				pack++;
				bal=k;
			}
			else if(ele==(bal-1))
			{
				pack++;
				bal=k;
			}
			else
			{
				bal-=ele+1;
			}
		}
		scanf("%lld",&ele);
		if(ele>bal)
		{
			//System.out.println("pack hai abhi "+pack+" bal hai "+bal); //Bhenchod, Debugging :p
			if(bal!=k)
			{
				ele-=bal;
				pack+=(ele/k);
			}
			else pack+=(ele/k)-1;
			if(ele%k!=0)
			pack++;
			//System.out.println(el+"\t"+k);
		}
		printf("%lld\n",pack);
	}
	return 0;
}