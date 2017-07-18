#include <bits/stdc++.h>

using namespace std;

int main(){
    int t,n,k,i,j,len,el,val;
    scanf("%d",&t);
    vector<vector<int>> row;
    vector<int> column;
    while(t--){
        scanf("%d%d",&n,&k);
        val=(k*(k+1))/2;
        for(i=0;i<n;i++){
            scanf("\n%d",&len);
            for(j=0;j<len;j++){
                scanf("%d",&el);
                column.push_back(el);
            }
            row.push_back(column);
            column.clear();
        }

        for(i=0;i<row.size();i++)
            cout<<row[i].size()<<endl;
        row.clear();
    }
    return 0;
}
