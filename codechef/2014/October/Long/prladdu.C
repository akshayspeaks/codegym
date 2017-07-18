#include <stdio.h>

int main()
{
	int T,n,i,d,bal,mov,neu;
	long long int grass;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d",&n);
		grass=bal=mov=neu=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&d);
			//bal+=d;
			if(bal<0)
			{
				if(d<=0)
				{
					mov=-1*(bal);
					//bal+=d;
					neu=0;
				}
				else
				{
					if((bal+d)>=0)
						{
							mov=0;
							neu=-1*bal;
						}
					else
					{
						mov=-1*(bal+d);
						neu=d;
					}
					//bal+=d;
					//neu=min((-1*(bal)),d);
				}
				grass+=mov+neu;
			}
			else if(bal>0)
			{
				if(d<0)
				{
					if((bal+d)<=0)
						{
							mov=0;
							neu=bal;
						}
					else
					{
						mov=bal+d;
						neu=-1*d;
					}
					//bal+=d;
					//neu=min(bal-d,(-1*d));
				}
				else
				{
					mov=bal;
					//bal+=d;
					neu=0;
				}
				grass+=mov+neu;
			}
			bal+=d;
		}
		printf("%lld\n",grass);
	}
	return 0;
}