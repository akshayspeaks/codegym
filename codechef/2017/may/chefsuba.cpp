#include<bits/stdc++.h>
using namespace std;

void displayVec(vector<int> &arr){
    for(vector<int>::iterator it=arr.begin();it!=arr.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
}
int main(){
    int n,k,p,i,sm;
    string q;
    cin>>n>>k>>p;
    k=min(n,k);
    vector<int>arr(n);
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>q;
    vector<int> track;
    sm=0;
    for(i=0;i<k;i++)
        sm+=arr[i];
    track.push_back(sm);
    for(i=1;i<=n-k;i++){
        sm+=arr[i+k-1]-arr[i-1];
        track.push_back(sm);
    }
    for(i=0;i<k-1;i++){
        sm+=arr[i]-arr[n-k+i];
        track.push_back(sm);
    }
    //cout<<"tracking shit ..........."<<endl;
    //displayVec(track);
    vector<int>soln(n);
    int mx;
    mx=0;
    for(i=1;i<n-k+1;i++){
        if(track[i]>=track[mx])
            mx=i;
    }
    soln[0]=track[mx];
    for(i=1;i<n;i++){
        //start=i end = (n-k+1)%n for soln[n-i]
        if(track[(i+n-k)%n]>=track[mx])
            mx=(i+n-k)%n;
        if(mx==i-1){
            mx=i;
            for(sm=i+1;sm<=(i+n-k);sm++){
                if(track[mx]<=track[sm%n])
                    mx=sm%n;
            }
        }
        //cout<<"max btw "<<i<<" and "<<(i+n-k)%n<<" is at "<<mx<<endl;
        soln[n-i]=track[mx];
    }
    //cout<<"soln shit....."<<endl;
    //displayVec(soln);
    int off=0;
    for(i=0;i<p;i++){
        if(q[i]=='!'){
            if(off==n-1)
                off=0;
            else
                off++;
        }
        else{

            printf("%d\n",soln[off]);
        }
    }

    return 0;
}
