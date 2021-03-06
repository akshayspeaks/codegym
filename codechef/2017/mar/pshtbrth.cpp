//Thank you Gaurav Sen for the walkthrough
#include <bits/stdc++.h>
using namespace std;

vector<int> grundy(65536,-1);

//------------------SPRAGUE GRUNDY STUFF------------------
int getMex(const unordered_set<int>&s)
{
    int mex=0;
    while(s.find(mex)!=s.end())
        mex++;
    return mex;
}
int checkOne(int mat,int i,int j,int k,int l)
{
    bitset<16> m(mat);
    for(int x=i;x<=j;x++){
        for(int y=k;y<=l;y++){
            int pos=15-((x*4)+y);
            if(!m.test(pos)){
                return -1;
            }
            m.reset(pos);
        }
    }
    int res=m.to_ullong();
    return res;
}
int getGrundy(int pos)
{
    if (grundy[pos]!=-1)
        return grundy[pos];
    unordered_set<int> gSet;
    int i,j,k,l,res;
    for(i=0;i<=3;i++){
        for(j=i;j<=3;j++){
            for(k=0;k<=3;k++){
                for(l=k;l<=3;l++){
                    res=checkOne(pos,i,j,k,l);
                    if(res!=-1){
                        grundy[res]=getGrundy(res);
                        gSet.insert(grundy[res]);
                    }
                }
            }
        }
    }
    return getMex(gSet);
}

//-------------------------- SEGMENT TREE STUFF------------------------
int segTree[262143];
int arr[100003];
void buildTree(int low, int high, int pos){
    if(low==high){
        segTree[pos]=arr[low];
        return;
    }

    int mid=(low+high)/2;
    buildTree(low,mid,(2*pos)+1);
    buildTree(mid+1,high,(2*pos)+2);
    
    segTree[pos]=segTree[(2*pos)+1] ^ segTree[(2*pos)+2];

}

int rangeQuery(int low, int high, int qlow, int qhigh, int pos){
    if(qlow<=low && qhigh>=high) return segTree[pos];

    if(qlow>high || qhigh<low)
        return 0;
    int mid=(low+high)/2;
    return (rangeQuery(low,mid,qlow,qhigh,pos*2+1) ^ 
            rangeQuery(mid+1,high,qlow,qhigh,pos*2+2));
}

void updateTree(int idx, int delta, int low, int high, int pos){
    if(idx<low || idx>high) return;

    if(low==high){
        segTree[pos]=delta;
        return;
    }

    int mid=(low+high)/2;
    updateTree(idx,delta,low,mid,(2*pos)+1);
    updateTree(idx,delta,mid+1,high,(2*pos)+2);

    segTree[pos]=segTree[pos*2+1] ^ segTree[pos*2+2];
}

//-------------------OTHER UTILS-----------------
char line[6];
int toInt(vector<vector<bool>> &matrix) {
	int h = 0;
	for(int i = 0; i < 4; ++i)
		for(int j = 0; j < 4; ++j)
			h = 2 * h + matrix[i][j];
	return h;
}
int readMat() {
	vector<vector<bool>> matrix(4, vector<bool>(4));
	for(int i = 0; i < 4; ++i) {
        cin>>line;
		for(int j = 0; j < 4; ++j)
			matrix[i][j] = line[j] == '1';
	}
	return toInt(matrix);
}

//-----------------MAIN---------------
int main()
{
    //ios_base::sync_with_stdio(0);
    *(grundy.begin())=0; //Base case

    grundy[65535]=getGrundy(65535); // Basically, generate grundy numbers for all possible 
                                    // matrices represented by integers

    int t,n,m,ch,id,l,r,mat;
    cin>>t;
    while(t--){
       // cin>>n>>m;
        scanf("%d%d",&n,&m);
        for(int i=0;i<n;i++){
            mat=readMat();
            arr[i]=grundy[mat];

            scanf("\n");
     //       cout<<"matrix number "<<i<<" entered "<<mat<<endl;
        }
       // cout<<endl;
        buildTree(0,n-1,0);
        //displaySegTree(2*n);
        while(m--){
            scanf("%d",&ch);
            if(ch==1){
               // cin>>l>>r;
                scanf("%d %d\n",&l,&r);
       //         cout<<"winner for "<<m<<" from "<<l<<" to "<<r<<endl;
                l--;r--;
                if(rangeQuery(0,n-1,l,r,0))
                    printf("Pishty\n");
                else
                    printf("Lotsy\n");
            }
            else{
                //cin>>id;
                scanf("%d\n",&id);
                updateTree(id-1,grundy[readMat()],0,n-1,0);
               // displaySegTree(2*n);
            }
        }
    }
    return 0;

}
