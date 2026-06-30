#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        vector<int> freq(2 * n + 1, 0);

        for (int i = 0; i < 2 * n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        int odd = 0, even = 0;

        for (int f : freq) {
            if (f == 0) continue;
            if (f & 1) odd++;
            else even++;
        }

        long long ans;

        if (odd > 0) {
            ans = odd + 2LL * even;
        } else {
            int t = even;
            if ((t & 1) != (n & 1)) t--;
            ans = 2LL * t;
        }

        cout << ans << '\n';
    }

    return 0;
}