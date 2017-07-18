#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,i,el,sa=INT_MAX,la=0,sb=INT_MAX,lb=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>el;
        la=max(la,el);
        cin>>el;
        sa=min(sa,el);
    }
    cin>>n;
    for(i=0;i<n;i++){
        cin>>el;
        lb=max(lb,el);
        cin>>el;
        sb=min(sb,el);
    }
    cout<<max(max(lb-sa,la-sb),0)<<endl;
    return 0;
}
