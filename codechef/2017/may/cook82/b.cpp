#include <bits/stdc++.h>
using namespace std;
set<int> allFacs;
map<int,int> facFreq;
int M=1000000007;
void factorize(int n){
    int d=2;
    while((d*d)<=n){
        if(n%d==0){
            allFacs.insert(d);
            //facFreq[d]=0;
            while(n%d==0){
                facFreq[d]++;
                n/=d;
            }
        }
        d+=1;
    }
    if(n>1)
        allFacs.insert(n);
    facFreq[n]++;
}
void prst(){
    for(set<int>::iterator it=allFacs.begin();it!=allFacs.end();it++){
        cout<<*it<<"------->"<<facFreq[*it]<<endl;
    }
}

bool shouldDoIt(int n){
    int sz=allFacs.size();
    for(set<int>::iterator it=allFacs.begin();it!=allFacs.end();it++){
        if(facFreq[(*it)]%n!=0)
            return false;
    }
    return true;
}

int power(int x, unsigned int y)
{
    int res = 1;
    x = x % M;
 
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % M;
        y = y>>1; // y = y/2
        x = (x*x) % M;  
    }
    return res;
}
long long int  mulmod(long long int a, long long int b)
{
    long long int res = 0;
    a = a % M;
    while (b > 0)
    {
        if (b % 2 == 1)
            res = (res + a) % M;
        a = (a * 2) % M;
        b /= 2;
    }
    return res % M;
}
long long int getThatFucker(int n){
    n++;
    long long int res=1,rem;
    for(set<int>::iterator it=allFacs.begin();it!=allFacs.end();it++){
        rem=facFreq[*it]%n;
        if(rem!=0)
            rem=n-rem;
        //res=((res%M)*(power(*it,rem)%M))%M;
        res=mulmod(res,power(*it,rem));
    }
    return res;

}
int main(){
    long long int n,el;
    scanf("%lld",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&el);
        factorize(el);
    }
    //prst();
    if(shouldDoIt(n)){
        cout<<"justdoit"<<endl;
    }
    else{
        cout<<getThatFucker(n)<<endl;
    }
    return 0;
}
