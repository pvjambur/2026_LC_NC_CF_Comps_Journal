#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

long long pw(long long b, long long e, long long mod) {
    long long res=1;
    b%=mod;
    while (e>0) {
        if (e&1) res=res*b%mod;
        b=b*b%mod;
        e>>=1;
    }
    return res;
}
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long n,m,r,c;
        cin>>n>>m>>r>>c;
        long long phi=MOD-1;
        long long tot=(n%phi)*(m%phi)%phi;
        long long rows=max(0LL,n-r+1);
        long long cols=max(0LL,m-c+1);
        long long fix=(rows%phi)*(cols%phi)%phi;
        long long e=(tot-fix+phi)%phi;
        cout<<pw(2,e,MOD)<<"\n";
    }
    return 0;
}