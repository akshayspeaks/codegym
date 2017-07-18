//Abhi kitna easy lag raha hai na sab? Gaand lag jayegi ekdum se
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,n,el,mx,mn;
     vector<int> arr;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        arr.resize(n);
        //Thou fetch those effin numbers, for this ain's sparta!!!(read TopCoder)
        for(i=0;i<n;i++)
        {
            scanf("%d",&el);
            arr[i]=el;
        }

        //Haan, ab kar bhai jo karna hai
        sort(arr.begin(),arr.end());
        if(arr[1]-arr[0]!=1)
            cout<<arr[0];
        else if(arr[n-1]-arr[n-2]!=1)
            cout<<arr[n-1];
        else
        {
            i=1;
            while(arr[i+1]!=arr[i])
                i++;
            cout<<arr[i];

        }
        cout<<endl;

    }

    return 0;
}
