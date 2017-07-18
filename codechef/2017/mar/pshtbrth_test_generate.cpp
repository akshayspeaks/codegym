#include<bits/stdc++.h>

using namespace std;

void printRandomMatrix(){
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<rand()%2;
        }
        cout<<endl;
    }
}
int main(){
    int t,n,m,k,l;
    t=4;
    n=100;
    m=100;
    cout<<t<<endl;
    for(int test=0;test<t;test++){
        cout<<n<<" "<<m<<endl;
        for(int i=0;i<n;i++){
            printRandomMatrix();
            cout<<endl;
        }
        for(int i=0;i<m;i++){
            switch((rand()%2)+1){
                case 1: cout<<1<<" ";
                        k=(rand()%n)+1;
                        l=(rand()%(n-k+1))+k;
                        cout<<k<<" "<<l<<endl;
                        break;
                case 2: cout<<2<<" "<<((rand()%n)+1)<<endl;
                        printRandomMatrix();
            }
        }
    }
    return 0;
}
