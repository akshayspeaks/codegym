#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,t,len;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        len=s.size();
        i=0;
        while(s[i]=='C')
            i++;
        while(s[i]=='E')
            i++;
        while(s[i]=='S')
            i++;
        if(i==len)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }

    return 0;
}
