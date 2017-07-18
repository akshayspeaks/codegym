#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k,el,i,pock;
    cin>>n>>k;
    pock=0;
    for(i=0;i<n;i++){
        cin>>el;
        pock+=(((el-1)/k)+1);
        //cout<<"pock "<<pock<<endl;
    }
    cout<<(pock+1)/2<<endl;
    return 0;
}
