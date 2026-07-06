#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        vector<int> cnt1(n+1,0),cnt3(n+1,0);
        for(int i=1;i<=n;i++){
            cnt1[i]=cnt1[i-1]+(arr[i-1]==1);
            cnt3[i]=cnt3[i-1]+(arr[i-1]==3);
        }
        vector<long long> left(n+1);
        for(int i=0;i<=n;i++) left[i]=2LL*cnt1[i]-i;
        vector<long long> mid(n+1,0);
        for(int i=1;i<=n-1;i++)
            mid[i]=i-2LL*cnt3[i];

        vector<long long> best(n+2,LLONG_MIN);
        for(int i=n-1;i>=1;i--) best[i]=max(mid[i],best[i+1]);
        bool found=false;
        for(int cut=1;cut<=n-2;cut++){
            if(left[cut]>=0 && best[cut+1]>=mid[cut]){
                found=true;
                break;
            }
        }
        if(found) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}