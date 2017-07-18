#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,k,p,i,j,el;
    set<int> s;
    bool some_flag;
    cin>>t;
    while(t--){
        cin>>n>>k;
        some_flag=false;
        for(i=0;i<n;i++){
            cin>>p;
            for(j=0;j<p;j++){
                cin>>el;
                s.insert(el);
            }
            if(s.size()==k && i<n-1){
                some_flag=true;  
            }

        }
        if(some_flag)
            cout<<"some"<<endl;
        else if(s.size()==k)
            cout<<"all"<<endl;
        else cout<<"sad"<<endl;
        s.clear();
    }
}
