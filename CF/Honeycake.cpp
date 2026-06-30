#include <bits/stdc++.h>
using namespace std;

vector<long long> divisors(long long x) {
    vector<long long> divs;

    for (long long i = 1; i * i <= x; i++) {
        if (x % i == 0) {
            divs.push_back(i);
            if (i * i != x)
                divs.push_back(x / i);
        }
    }

    return divs;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long w, h, d, n;
    cin >> w >> h >> d;
    cin >> n;

    vector<long long> dw = divisors(w);
    vector<long long> dh = divisors(h);

    for (long long a : dw) {
        for (long long b : dh) {
            long long prod = a * b;

            if (prod > n) continue;
            if (n % prod) continue;

            long long c = n / prod;

            if (d % c == 0) {
                cout << a - 1 << ' '
                     << b - 1 << ' '
                     << c - 1 << '\n';
                return 0;
            }
        }
    }

    cout << -1 << '\n';
    return 0;
}