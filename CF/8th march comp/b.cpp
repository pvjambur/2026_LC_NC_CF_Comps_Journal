#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, m, l;
        cin >> n >> m >> l;

        long long a;
        for (int i = 0; i < n; i++) cin >> a; // we don't actually need ai

        long long lo = 0, hi = l, ans = l;

        while (lo <= hi) {
            long long mid = (lo + hi) / 2;

            long long resets = m * (l / (mid + 1));

            if (resets <= n) {
                ans = mid;
                hi = mid - 1;
            } else {
                lo = mid + 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}