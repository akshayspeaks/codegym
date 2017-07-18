#include <stdio.h>
#include <string.h>

int main()
{
	int T,flag,len,i;
	long long int ans,M=1000000007;
	char inp[100000];
	scanf("%d",&T);
	while(T--)
	{
		scanf("%s",&inp);
        len=strlen(inp);
		flag=1;
        ans=1;
		for(i=0;i<len;i++)
		{
			if(flag==1)
			{
				if(inp[i]=='l')
					ans=(ans*2)%M;       //HERE
				else
					ans=((ans*2)%M+2)%M;  //HERE
				flag=0;
			}
			else
			{
				if(inp[i]=='l')
					ans=(((ans*2)%M)-1)%M;  // HERE
				else
					ans=(((ans*2)%M)+1)%M;    //HERE
				flag=1;
			}
		}
		printf("%lld\n",ans);
	}
	return 0;
}
