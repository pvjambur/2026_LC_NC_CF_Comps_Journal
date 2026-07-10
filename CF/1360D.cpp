#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;

        int best = 1;

        for (int i = 1; i * i <= n; i++) {
            if (n % i) continue;

            if (i <= k)
                best = max(best, i);

            if (n / i <= k)
                best = max(best, n / i);
        }

        cout << n / best << '\n';
    }

    return 0;
}