#include <cstdio>
#include <iostream>
#include <string.h>
using namespace std;

char mat[52][52];

int isCPC(int i,int j)
{
	if(mat[i][j]=='#')
		return 0;
	int x;
	for(x=-2;x<=2;x++)
	{
		if(mat[i][j+x]!='^' || mat[i+x][j]!='^')
			return 0;
	}
	return 1;
}

int main()
{
	int t,row,col,i,j,count;
	cin>>t;
	while(t--)
	{
		cin>>row>>col;
		for(i=0;i<row;i++)
		{
			scanf("%s",mat[i]);
		}
		count=0;
		for(i=2;i<row-2;i++)
		{
			for(j=2;j<col-2;j++)
			{
				if(isCPC(i,j))
					count++;
			}
		}
		cout<<count<<endl;
	}

}