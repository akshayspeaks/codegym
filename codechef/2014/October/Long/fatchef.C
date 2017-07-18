#include <stdio.h>
#define Mod 1000000009

int main()
{
	int T,N,M,i,j,start=99999,stop=0,ind,last;
	long long int ans;
	char ch;
	scanf("%d",&T);
	while(T--)
	{
		int arr[100000]={0};
		scanf("%d%d",&N,&M);
		ans=1;
		//scanf("%c",&ch);//new line
		for(i=0;i<M;i++)
		{
			scanf(" %c%d",&ch,&j);
			arr[j-1]=ch;
			if(start>(j-1))
				start=j-1;
			if(stop<(j-1))
				stop=j-1;
			//scanf("%c",&ch);//new line
		}
		last=arr[start];
		for(i=start+1,ind=start;i<=stop;i++)
		{
			if (arr[i]==0)
				continue;
			else if(arr[i]==last)
			{
				ind=i;
				continue;
			}
			
			ans=(ans*(i-ind))%Mod;
			ind=i;
			last=arr[i];			
		}
		printf("%lld\n",ans);
	}
	return 0;
}