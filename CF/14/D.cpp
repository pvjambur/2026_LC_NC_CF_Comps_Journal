#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<long long> a(n+1);
        for(int i=1;i<=n;i++) cin>>a[i];
        vector<int> allow(n+1,0);
        for(int i=0;i<m;i++){
            int x;
            cin>>x;
            allow[x]=1;
        }
        long long dp0=0;
        long long dp1=0;
        bool ready=false;
        for(int i=n;i>=1;i--){
            long long temp0,temp1;
            if(allow[i]){
                long long best;
                if(ready) best=max(dp0,dp1);
                else best=dp0;
                temp0=best+a[i];
                temp1=best-a[i];
                ready=true;
            } else {
                temp0=dp0+a[i];
                temp1=dp1-a[i];
            }
            dp0=temp0;
            dp1=temp1;
        }
        long long ans;
        if(ready) ans=max(dp0,dp1);
        else ans=dp0;
        cout<<ans<<endl;
    }
    return 0;
}