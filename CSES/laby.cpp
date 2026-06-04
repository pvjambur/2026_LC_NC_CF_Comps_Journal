#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<string> grid(n);

    pair<int,int> A, B;

    for (int i = 0; i < n; i++) {
        cin >> grid[i];

        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'A') A = {i, j};
            if (grid[i][j] == 'B') B = {i, j};
        }
    }

    queue<pair<int,int>> q;
    vector<vector<bool>> vis(n, vector<bool>(m, false));
    vector<vector<char>> par(n, vector<char>(m, '?'));

    vector<int> dr = {-1, 1, 0, 0};
    vector<int> dc = {0, 0, -1, 1};
    vector<char> dir = {'U', 'D', 'L', 'R'};

    q.push(A);
    vis[A.first][A.second] = true;

    while (!q.empty()) {
        auto [r, c] = q.front();
        q.pop();

        for (int k = 0; k < 4; k++) {
            int nr = r + dr[k];
            int nc = c + dc[k];

            if (nr < 0 || nr >= n || nc < 0 || nc >= m)
                continue;

            if (vis[nr][nc] || grid[nr][nc] == '#')
                continue;

            vis[nr][nc] = true;
            par[nr][nc] = dir[k];

            q.push({nr, nc});
        }
    }

    if (!vis[B.first][B.second]) {
        cout << "NO\n";
        return 0;
    }

    string path;

    int r = B.first;
    int c = B.second;

    while (make_pair(r, c) != A) {
        char d = par[r][c];
        path += d;

        if (d == 'U') r++;
        else if (d == 'D') r--;
        else if (d == 'L') c++;
        else if (d == 'R') c--;
    }

    reverse(path.begin(), path.end());

    cout << "YES\n";
    cout << path.size() << '\n';
    cout << path << '\n';

    return 0;
}