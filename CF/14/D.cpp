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
        long long neg=-(1LL<<60);
        long long same=0;
        long long flip=neg;
        for(int i=1;i<=n;i++){
            long long nsame=same+a[i];
            long long nflip=flip-a[i];
            if(allow[i]){
                nsame=max(nsame,flip+a[i]);
                nflip=max(nflip,same-a[i]);
            }
            same=nsame;
            flip=nflip;
        }
        cout<<max(same,flip)<<endl;
    }
    return 0;
}