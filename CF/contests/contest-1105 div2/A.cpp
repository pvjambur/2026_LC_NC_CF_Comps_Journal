#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n,k;
        cin >> n >> k;
        long long res = 0;
        for (long long i=1;i<=n;i<<= 1) {
            long long temp = min(n/i,k);
            res += temp;
            n -= temp*i;
        }
        cout<<res <<endl;
    }

    return 0;
}