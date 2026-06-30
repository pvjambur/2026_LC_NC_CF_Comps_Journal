#include <bits/stdc++.h>
using namespace std;

const int MOD=998244353;

int flag(int x){
    int k=0;
    while(x>1){x>>=1;k++;}
    return k;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;ththth
        cin>>n;
        vector<int> a(n);
        int X=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            X^=a[i];
        }
        if(n==1){
            cout<<0<<"\n";
            continue;
        }
        if(X==0){
            cout<<1<<"\n";
            continue;
        }
        int k=flag(X);
        int cnt=0;
        for(int i=0;i<n;i++){
            if((a[i]>>k)&1) cnt++;
        }
        cout<<cnt%MOD<<"\n";
    }
}