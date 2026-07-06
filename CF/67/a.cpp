#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int k;
        cin>>k;
        vector<int> arr(k);
        for(int i=0;i<k;i++) cin>>arr[i];
        int big=0, dup=0;
        for(int i=0;i<k;i++){
            big=max(big,arr[i]);
            if(arr[i]>=2) dup++;
        }
        if(big>=3 || dup>=2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}