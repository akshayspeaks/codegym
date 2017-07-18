#include <cstdio>
#include <math.h>
using namespace std;

int main()
{
	long long int t,n,i,temp;
	long long int sum,tsum;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		sum=1;
		/*for(i=2;i<=n;i++)
		{
			if(n%i==0)
			{
				sum+=i;
			}
		}*/
		temp=2;
		while (n%2 == 0)
    	{
        	//printf("%d ", 2);
        	sum+=temp;
        	temp*=2;
        	n = n/2;

    	}
		//printf("%d\n",sum);
    	for (i = 3; i <= sqrt(n); i = i+2)
    	{
    		temp=i;
    		tsum=1;
        	while (n%i == 0)
    		{
            	//printf("%d ", i);
            	tsum+=temp;
            	temp*=i;
        	    n = n/i;
        	}
        	//printf("%lld\n",tsum);
        	sum*=tsum;
    	}
 
		if (n > 2)
    		sum*=n+1;
    	printf("%lld\n",sum);
	}
	return 0;
}