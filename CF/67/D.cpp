#include <bits/stdc++.h>
using namespace std;
int dig_len;

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        int n=a.size(), m=b.size();
        dig_len=m;
        vector<vector<int>> dp(10, vector<int>(m+2,-1));

        vector<int> pa(n+1,0), pb(m+1,0);
        for(int i=1;i<=n;i++) pa[i]=(pa[i-1]+(a[i-1]-'0'))%10;
        for(int j=1;j<=m;j++) pb[j]=(pb[j-1]+(b[j-1]-'0'))%10;

        int d0=((pa[0]-pb[0])%10+10)%10;
        for(int i=1;i<=dig_len+1;i+=i&(-i)) dp[d0][i]=max(dp[d0][i],0);

        int ans=-1;

        for(int i=1;i<=n;i++){
            vector<int> row(m+1,-1);
            for(int j=1;j<=m;j++){
                int d=((pa[i]-pb[j])%10+10)%10;
                int res=-1;
                for(int p=j;p>0;p-=p&(-p))
                    res=max(res,dp[d][p]);
                if(res!=-1) row[j]=res+1;
            }
            for(int j=0;j<=m;j++){
                if(row[j]!=-1){
                    int d=((pa[i]-pb[j])%10+10)%10;
                    for(int p=j+1;p<=dig_len+1;p+=p&(-p))
                        dp[d][p]=max(dp[d][p],row[j]);
                }
            }
            if(i==n) ans=row[m];
        }

        cout<<ans<<endl;
    }
    return 0;
}