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

        string s;
        cin >> s;

        int i = 0;
        int ans = 0;

        while (i < n) {

            if (s[i] == '(') {

                if (i + 1 < n && s[i + 1] == '(') {
                    ans++;
                    i += 2;
                } else {

                    int bal = 0;
                    bool ok = false;

                    for (int j = i; j < n; j++) {
                        if (s[j] == '(')
                            bal++;
                        else
                            bal--;

                        if (bal == 0) {
                            ans++;
                            i = j + 1;
                            ok = true;
                            break;
                        }
                    }

                    if (!ok)
                        break;
                }

            } else {

                bool ok = false;

                for (int j = i + 1; j < n; j++) {
                    if (s[j] == ')') {
                        ans++;
                        i = j + 1;
                        ok = true;
                        break;
                    }
                }

                if (!ok)
                    break;
            }
        }

        cout << ans << " " << n - i << "\n";
    }

    return 0;
}