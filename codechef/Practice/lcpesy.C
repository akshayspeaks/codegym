#include <stdio.h>

int main(void)
{
	int T;
	scanf("%d",&T);
	char ch;
	scanf("%c",&ch);
	while(T--)
	{
		int stat[123]={0};
		int count=0;
		scanf("%c",&ch);
		while(ch!='\n')
		{
			//printf("%c",ch);
			stat[ch]+=1;
			//printf("Stat [%d]=%d\n",ch,stat[ch]);
			scanf("%c",&ch);
			
		}
		while((scanf("%c",&ch)!=EOF))
		{
			if(ch=='\n')
			break;
			//printf("%c",ch);
			if(stat[ch]>0)
			{
				count++;
				stat[ch]-=1;
			}
			//scanf("%c",&ch);
			
		}
		printf("%d\n",count);
	}
	return 0;
}
