#include<bits/stdc++.h>
using namespace std;

int main(){
    int b,q,l,m,el,i;
    bool f_up=false;
    set<int> e;
    cin>>b>>q>>l>>m;
    while(abs(b)<=l){
        if(!e.insert(b).second){
            f_up=true;
            break;
        }
        b*=q;
        
    }
    for(i=0;i<m;i++){
        cin>>el;
        e.erase(el);
    }
    if(e.size()!=0 && f_up)
        cout<<"inf"<<endl;
    else
        cout<<e.size()<<endl;
    return 0;
}
