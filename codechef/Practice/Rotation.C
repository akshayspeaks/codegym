#include <stdio.h>
//#define n 100000
int arr[100000];

int main()
{
	int i,T,N,ind=0,d;
	char ch;
	scanf("%d%d",&N,&T);
	for(i=0;i<N;i++)
		scanf("%d",&arr[i]);
scanf("%c",&ch);// for the first new line character
	while(T--)
	{
		scanf("%c%d",&ch,&d);
		//d=d%N;

		switch(ch)
		{
			case 'C': 	ind+=d; ind%=N;
						ind=(ind<0) ? ind+N:ind;
						break;
			case 'A':	ind-=d; ind%=N;
						ind=(ind<0) ? ind+N:ind;
						break;
			case 'R':	printf("%d\n",arr[(d+ind-1)%N]);
						break;
			default:	printf("BHENCHOD Ye Kaise?!\n");

		}
		scanf("%c",&ch);// new line character
	}
	return 0;
}
