#include<bits/stdc++.h>
using namespace std;

void displayVec(vector<int>&vec)
{
    for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";
    cout<<endl;
}
int main(){
    int n,k,i,offset,leader=0,ish;
    cin>>n>>k;
    vector<int>arr(n);
    for(i=0;i<n;i++)
        arr[i]=i+1;
    for(i=0;i<k;i++)
    {
        cin>>offset;
        ish=((leader+offset)%n--);
        cout<<arr[ish]<<" ";
        arr.erase(arr.begin()+ish);
        leader=ish;
    }
    cout<<endl;
    return 0;
}
