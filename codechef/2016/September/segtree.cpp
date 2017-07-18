#include <bits/stdc++.h>

using namespace std;
void build(vector<int> &tree, vector<int> &arr,int n, int b, int e)
{
	if(b>e)
		return;
	else if(b==e)
	{
		tree[n]=arr[b];
		return;
	}
	int mid=(b+e)/2;
	build(tree,arr,n*2+1,b,mid);
	build(tree,arr,n*2+2,mid+1,e);
	tree[n]= max(tree[(n*2)+1],tree[(n*2) +2]);	
}

void update(vector<int> &tree,int n,int b,int e,int idx,int value)
{
	if(tree[n]==1)
		return;
	if(b>e || idx<b || idx>e)
		return;
	if(b==e)
	{
		tree[n]=value;
		return;
	}
	int mid=(b+e)/2;
	update(tree,n*2+1,b,mid,idx,value);
	update(tree,n*2+2,mid+1,e,idx,value);

	tree[n]=max(tree[(n*2)+1],tree[(n*2)+2]);

}

int queryUtil(vector<int> &tree,int ss,int se,int qs,int qe,int index)
{
	if(qs<=ss && qe>=se)
		return tree[index];

	if(se<qs || ss>qe)
		return 0;

	int mid = (ss+se)/2;

	return max(queryUtil(tree,ss,mid,qs,qe,2*index+1),
		queryUtil(tree,mid+1,se,qs,qe,2*index+2));
}

int query(vector<int> &tree,int n,int b,int e)
{
	return queryUtil(tree,0,n-1,b,e,0);

}
/*int query(vector<int> &tree,int n, int b, int e, int i, int j, int offt)
{
 if (b>e || i>j || b>j || e<j)
 	retrun;

 if (b>=i && e<=j)
  return tree[n].cmax + offt; //the increment of current node is already added to cmax here (see update function)

  offt += tree[n].offt;
 return max ( query(n*2 , b , (b+e)/2 , i , j, offt) , 
  query(n*2+1 , (b+e)/2 + 1 , e , i , j, offt) );
}*/

int main()
{
	vector<int> v;
	for (int i=0;i<=7;i++)
	{
		v.push_back((i*2)+1);
	}
	v[0]=25;
	vector<int>::iterator it=v.begin();
	while(it!=v.end())
	{
		cout<<*it<<" ";
		it++;
	}
	cout<<endl;
	vector<int> tree(3*v.size(),0);

	build(tree,v,0,0,v.size()-1);
	tree.erase(find(tree.begin(),tree.end(),0),tree.end());
	for(it=tree.begin();it<tree.end();it++)
		cout<<*it<<" ";
	cout<<endl;
	cout<<query(tree,v.size(),0,7)<<endl;
	update(tree,0,0,v.size()-1,v.size()-1,30);
	it=tree.begin();
	while(it!=tree.end())
	{
		cout<<*it<<" ";
		it++;
	}
	cout<<endl;
	cout<<query(tree,v.size(),0,7)<<endl;

	return 0;
}