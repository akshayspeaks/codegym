#include <bits/stdc++.h>

using namespace std;

#define ict int t; cin>>t; while (t--)

bool v[1000000];
vector<int> sieve(1000001, 0);

void fastscan(int &number)
{
    //variable to indicate sign of input number
    bool negative = false;
    register int c;
 
    number = 0;
 
    // extract current character from buffer
    c = getchar();
    if (c=='-')
    {
        // number is negative
        negative = true;
 
        // extract the next character from the buffer
        c = getchar();
    }
 
    // Keep on extracting characters if they are integers
    // i.e ASCII Value lies from '0'(48) to '9' (57)
    for (; (c>47 && c<58); c=getchar())
        number = number *10 + c - 48;
 
    // if scanned input has a negative sign, negate the
    // value of the input number
    if (negative)
        number *= -1;
}

void initSieve()
{
	sieve[1]=1;
	for (int i = 2; i <= 1000000; i += 2)
	sieve[i] = 2;//even numbers have smallest prime factor 2
	for (long long int i = 3; i < 1000000; i += 2){
		if (!v[i]){
			sieve[i] = i;
			for (long long int j = i; (j*i) < 1000000; j += 2){
				if (!v[j*i])	v[j*i] = true, sieve[j*i] = i;
			}
		}
	}
}
void build(vector<int> &tree, vector<int> &arr,int n, int b, int e)
{
	if(b>e)
		return;
	else if(b==e)
	{
		tree[n]=sieve[arr[b]];
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
int main()
{
	initSieve();
	// cout<<sieve[1000000]<<endl;
	int n,m,ele,i,type,l,r,maxSieve;

	vector<int>::iterator it;
	ict
	{
		fastscan(n);
		fastscan(m);
		vector<int> arr,soln;
		for (i=0;i<n;i++)
		{
			fastscan(ele);
			arr.push_back(ele);
		}
		/*vector <int> temp;
		for(i=0;i<n;i++)
			temp.push_back(sieve[arr[i]]);*/
		vector<int> tree(3*n,0);
		build(tree,arr,0,0,n-1);
		// tree.erase(find(tree.begin(),tree.end(),0),tree.end());
		for (i=0;i<m;i++)
		{
			fastscan(type);
			fastscan(l);
			fastscan(r);	
			switch(type)
			{
				case 0:
					for(it=arr.begin()+l-1;it<arr.begin()+r;it++)
					{
						*it/=sieve[*it];
						// if(sieve[*it]!=1)
						update(tree,0,0,n-1,it-arr.begin(),sieve[*it]);
					}

				break;
				case 1:
					/*maxSieve=0;
					for(it=arr.begin()+l-1;it<arr.begin()+r;it++)
					{
						maxSieve=maxSieve>sieve[*it]?maxSieve:sieve[*it];
					}*/
					// cout<<"old: "<<maxSieve<<endl;
					maxSieve=query(tree,n,l-1,r-1);
					// cout<<"new: "<<maxSieve<<endl;
					soln.push_back(maxSieve);
				break;
			}		
		}
		for (it=soln.begin();it<soln.end();it++)
		{
			cout<<*it<<" ";
		}
		cout<<"\n";
	}
}