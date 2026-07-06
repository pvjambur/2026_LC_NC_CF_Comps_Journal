#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        vector<int> lens;
        int i=0;
        while(i<n){
            int j=i;
            while(j<n && a[j]==a[i]) j++;
            lens.push_back(j-i);
            i=j;
        }

        vector<long long> freq(n+2,0);
        for(int c: lens) freq[c]++;

        vector<long long> A(n+2,0), B(n+2,0);
        for(int len=n; len>=1; len--){
            A[len]=A[len+1]+freq[len];
            B[len]=B[len+1]+(long long)len*freq[len];
        }

        long long ans=0;
        for(int L=1; L<=n; L++){
            if(freq[L]==0) continue;
            long long cnt=A[L];
            long long sum=B[L];
            long long num=(long long)k-sum;
            if(num%cnt!=0) continue;
            long long res=num/cnt;
            if(res>=1-L) ans++;
        }

        cout<<ans<<"\n";
    }
    return 0;
}