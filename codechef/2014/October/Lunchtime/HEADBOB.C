#include <stdio.h>

int main()
{
	int t,n,i,ch;
	char str[1000];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		scanf("\n%s\n",&str);
		ch=3;
		for(i=0;i<n;i++)
		{
			if(str[i]=='Y')
			ch=1;
			else if(str[i]=='I')
			ch=2;
		}
		switch(ch)
		{
			case 1: printf("NOT INDIAN\n");
			break;
			case 2: printf("INDIAN\n");
			break;
			case 3: printf("NOT SURE\n");
		}
	}
	return 0;
}
