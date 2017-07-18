#include <bits/stdc++.h>
using namespace std;

void displayVec(vector<int> &arr){
    for(vector<int>::iterator it=arr.begin();it!=arr.end();it++){
        printf("%d ",(*it));
    }
    printf("\n");
}
int main(){
    int t,n,a,i;
    scanf("%d",&t);
    vector<int> arr;
    while(t--){
        scanf("%d",&n);
        arr.resize(2*n);
        for(i=0;i<2*n;i++){
            scanf("%d",&arr[i]);
        }
        sort(arr.begin(),arr.end());
        if(n==1){
            printf("%d\n",*(arr.end()-1));
            displayVec(arr);
        }
        else if(n<4){
            a=((n/2)+1)*2;
            i=arr[a];
            arr[a]=arr[a-1];
            arr[a-1]=i;
            printf("%d\n",i);
            displayVec(arr);
        }
        else{
            printf("%d\n",arr[n+(n/2)]);
            for(i=0;i<n;i++){
                printf("%d %d ",arr[i],arr[n+i]);
            }
            printf("\n");
        }
    }
    return 0;
}
