#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,el,mx;
    cin>>t;
    while(t--){
        cin>>n;
        mx=0;
        for(int i=0;i<n;i++){
            cin>>el;
            if (el>mx)
                mx=el;
        }
        cout<<n-mx<<endl;
    }
    return 0;
}
