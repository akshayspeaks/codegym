#include <bits/stdc++.h>

using namespace std;


int gr[1001][1001];
void prAdjList(vector < vector <int> > &grph)
{

	std::vector< std::vector<int> >::iterator i;
	std::vector<int>::iterator j;
	for(i=grph.begin();i<grph.end();i++)
	{
		cout<<i-grph.begin()+1<<" --------> ";
		for(j=i->begin();j<i->end();j++)
		{
			cout<<*j<<" ";
		}
		cout<<"\n";
	}
}

bool dfs(vector<vector<int> > &grph, vector<int> &colorReg, int v, int color)
{
	colorReg[v-1]=color;
	cout<<"Exploring "<<v<<endl;
	for(int i=0;i<grph[v-1].size();i++)
	{
		if(colorReg[grph[v-1][i]-1]==-1)
		{
			if (!dfs(grph,colorReg,grph[v-1][i],1-color))
				return false;
		}
		if(colorReg[grph[v-1][i]-1]==color)
				return false;
	}
	return true;
}
int main()
{
	ios::sync_with_stdio(0);
	int i,j,t,n,m,a,b;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		for(i=1;i<=n;i++)
		{
			for (j=1;j<=n;j++)
			{
				gr[i][j]=1;
			}
		}

		while(m--)
		{
			cin>>a>>b;
			gr[a][b]=0;
			gr[b][a]=0;
		}
		
		vector< vector<int> > grph;
		for(i=1;i<=n;i++)
		{
			std::vector<int> row;
			for(j=1;j<=n;j++)
			{
				if(j==i)
					continue;
				if(gr[i][j])
					row.push_back(j);
			}
			grph.push_back(row);
		}
		prAdjList(grph);
		// DFS for 2 coloring vertices.
		vector<int> colorReg(n,-1);
		bool fk=true;
		for(i=1;i<=n;i++)
		{
			if(colorReg[i-1]==-1)
				if(!dfs(grph,colorReg,i,1))
					fk=false;
		}
		if(fk)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		// cout<<"Color register: ";
		// for(i=0;i<colorReg.size();i++)
		// 	cout<<colorReg[i]<<" ";
		// cout<<endl;
	}

}