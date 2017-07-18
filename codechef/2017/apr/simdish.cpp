#include<bits/stdc++.h>
using namespace std;

int main(){
    set<string> dsh;
    int t,count,i;
    string s;
    cin>>t;
    t*=2;
    while(t--){
        for(i=0;i<4;i++){
            cin>>s;
            dsh.insert(s);
        }
        cout<<dsh.size()<<endl;
    }
}
