#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        vector<int> p(n+1,0);
        for(int i=2;i<=n;i++){
            p[i]=p[i-1];
            if(s[i-2]==s[i-1]) p[i]++;
        }
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            int cur=p[r]-p[l];
            int alt=1+cur;
            int temp=alt/2;
            if(temp<=k) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}