#include <bits/stdc++.h>

using namespace std;

int main(){
    int i,n,el,diff,mdiff=INT_MAX;
    cin>>n;
    vector<int> arr;
    map<int,int> mp;
    for(i=0;i<n;i++){
        cin>>el;
        arr.push_back(el);
    }
    sort(arr.begin(),arr.end());
    for(i=1;i<n;i++){
        diff=arr[i]-arr[i-1];
        if(mp.find(diff)==mp.end())
        {
            mp.insert(make_pair(diff,1));
        }
        else
            mp[diff]++;
        if(diff<mdiff)
            mdiff=diff;
    }
    cout<<mdiff<<" "<<mp[mdiff]<<endl;
    return 0;
}
