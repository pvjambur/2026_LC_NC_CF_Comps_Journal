#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        vector<int> p(n+1);
        for(int i=1;i<=n;i++) cin>>p[i];
        vector<vector<int>> adj(n+1);
        for(int i=1;i+x<=n;i++){
            adj[i].push_back(i+x);
            adj[i+x].push_back(i);
        }
        if(x!=y){
            for(int i=1;i+y<=n;i++){
            adj[i].push_back(i+y);
            adj[i+y].push_back(i);
            }
        }
        vector<int> grp(n+1,-1);
        int gid=0;
        for(int i=1;i<=n;i++){
            if(grp[i]!=-1) continue;
            queue<int> q;
            q.push(i);
            grp[i]=gid;
            while(!q.empty()){
                int u=q.front();
                q.pop();
                for(int v:adj[u]){
                    if(grp[v]==-1){
                        grp[v]=gid;
                        q.push(v);
                    }
                }
            }
            gid++;
        }
        bool valid=true;
        for(int i=1;i<=n;i++){
            if(grp[i]!=grp[p[i]]){
                valid=false;
                break;
            }
        }
        if(valid) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}