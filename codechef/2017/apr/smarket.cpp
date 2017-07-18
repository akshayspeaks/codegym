#include<bits/stdc++.h>
using namespace std;

void displayVec(vector<int>&v){
    
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
void updt(vector<int>&tree,int val,int idx){//update
    int n=tree.size();

    while(idx<=n){
        tree[idx]+=val;
        idx+=idx&(-idx);
    }
}

void update(vector<int>&tree,int val,int idx){
    for(vector<int>::iterator it=tree.end()-idx;it!=tree.end();it++){
        (*it)+=val;
    }
}
void makeTree(vector<int>&tree, vector<int>&arr){
    int i,n=arr.size();
    for(i=0;i<n;i++){
        update(tree,arr[i],i+1);
    }
}

int getSum(vector<int>&tree,int idx){
    int sum=0;
    while(idx>0){
        sum+=tree[idx];
        idx=idx&(idx-1);
    }
    return sum;
}

int fac,ulf,uls;
bool compareFun(const pair<int,pair<pair<int,int>,int>>&fir,
        const pair<int,pair<pair<int,int>,int>>&sec){
    ulf=fir.second.first.first/fac;
    uls=sec.second.first.first/fac;
    if(ulf==uls){
        return fir.second.first.second<sec.second.first.second;
    }
    else
        return ulf<uls;
}
void displayVOPOP(vector<pair<int,pair<pair<int,int>,int>>>& vec){
    printf("---------BEGIN-----------\n");
    for(vector<pair<int,pair<pair<int,int>,int>>>::iterator it=vec.begin();it!=vec.end();++it){
        printf("first--->%d\tsecond--->%d\tk----->%d\tindex--->%d\n",it->second.first.first,it->second.first.second,it->second.second,it->first);
    }
    printf("---------END-----------\n");
}
int main(){
    int t,i,n,el,q,prev,l,r,k,end,start,L,R;
    scanf("%d",&t);
    vector<int>tree,arr;
    int soln[100004];
    vector<pair<int,pair<pair<int,int>,int>>> queries;
    while(t--){
        scanf("%d%d%d",&n,&q,&prev);
        tree.assign(n,0);//change size to n+1 after mock
        arr.push_back(1);
        for(i=1;i<n;i++){
            scanf("%d",&el);
            if(el==prev)
                (*(arr.end()-1))++;
            else{
                arr.push_back(*(arr.end()-1)+1);
                prev=el;
            }
        }
        displayVec(arr);
        fac=sqrt(q);
        for(i=0;i<q;i++){
            scanf("%d%d%d",&l,&r,&k);
            queries.push_back(make_pair(i,make_pair(make_pair(l,r),k)));
        }
        sort(queries.begin(),queries.end(),compareFun);
        //displayVOPOP(queries);
        start=end=0;
        l=-1;
        r=-1;
        for(i=0;i<q;i++){
            L=queries[i].second.first.first;
            R=queries[i].second.first.second;
            cout<<"For L R "<<L<<" "<<R<<"with start end "<<start<<" "<<end<<endl;

            if(start==end){
                //fill(tree.begin(),tree.end(),0);
                if(l!=-1)
                update(tree,-1,r-l+1);//--- dispute on 1st run :D
                if(end!=0)
                    update(tree,1,arr[end]-arr[end-1]);
                else
                    update(tree,1,arr[end]);
            }
            else{
                update(tree,-1,r-arr[end-1]);
                update(tree,1,arr[end]-arr[end-1]);
                update(tree,-1,arr[start]-l+1);
                if(start!=0)
                    update(tree,1,arr[start]-arr[start-1]);
                else
                    update(tree,1,arr[0]);
            }

            //cout<<"WHOA"<<endl;
            while(arr[end]<R){
                end++;
                if(arr[end]<R)
                    update(tree,1,arr[end]-arr[end-1]);
            }
            while(start>0 && arr[start-1]>L){
                start--;
                if(arr[start-1]>L)
                    update(tree,1,arr[start]-arr[start-1]);
            }
            cout<<"After Exapansion"<<endl;
            displayVec(tree);

            while(arr[start]<L){
                if(start!=0)
                    update(tree,-1,arr[start]-arr[start-1]);
                else
                    update(tree,-1,arr[start]);
                start++;
            }
            //cout<<"alright. start and end "<<start<<" "<<end<<endl;

            while(end>0 && arr[end-1]>R){
                end--;
                update(tree,-1,arr[end+1]-arr[end]);
            }
            cout<<"alright yet again start and end "<<start<<" "<<end<<" and L&R "<<L<<" "<<R<<endl;
            displayVec(tree);
            if(start==end){
                update(tree,1,R-L+1);
            }
            else{
                update(tree,1,R-arr[end-1]);
                update(tree,1,arr[start]-L+1);
            }
            l=L;
            r=R;
            cout<<"fin for "<<queries[i].first<<endl;
            displayVec(tree);
            soln[queries[i].first]=*(tree.end()-queries[i].second.second);
        }
        for(i=0;i<q;i++)
            cout<<soln[i]<<endl;
        arr.clear();
        queries.clear();
    }
}
