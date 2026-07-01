#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<long long> a(n), b(n);
        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;
        long long pa = 0, pb = 0;
        int check = 1;
        for (int i=0;i<n;i++){
            pa += a[i];
            pb += b[i];
            if (pb < pa) check = 0;
        }
        if (check) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}