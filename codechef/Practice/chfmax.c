#include <stdio.h>
#include <string.h>
int main(void)
{
	int t,len,i,max,temp;
	
	char str[1003];
	scanf("%d",&t);
	while(t--)
	{
		int freq[26]={0};
		scanf("\n%s",&str);
		len=strlen(str);
		for(i=0;i<len;i++)
		{
			freq[str[i]-'a']++;
		}
		temp=0;
		
		
	/*	for(i=0;i<26;i++)
		{
			printf("%d ",freq[i]);
		}
		printf("\n");
	*/	
	
		for(i=0;i<26;i++)
		{
			if(freq[i]>temp)
			{
				temp=freq[i];
				max=i;
			}
		}
		for(i=0;i<len;i++)
		{
			if(((int)str[i]-'a')==max)
				printf("?");
				else
				printf("%c",str[i]);
			
		}
		printf("\n");
	}
	return 0;
}
