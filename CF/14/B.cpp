#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool flag=true;
        long long temp=0;
        for (int i=0;i<n-1;i++) {
            long long cur=temp+1;
            if (a[i]<cur){
                flag = false;
                break;
            }
            long long max_e = a[i]-cur;
            a[i+1]+=max_e;
            temp = cur;
        }
        if (flag && (a[n-1]>temp)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}