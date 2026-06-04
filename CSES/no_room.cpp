#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> dir = {{1,0},{-1,0},{0,1},{0,-1}};

void dfs(int r, int c, vector<vector<char>>& mp){
    int n = mp.size(), m = mp[0].size();

    if (r<0 || c<0 || r>=n || c>=m || mp[r][c]=='#') return;

    mp[r][c] = '#';

    for (auto &d: dir){
        dfs(r+d[0],c+d[1],mp);
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    vector<vector<char>> mp(n,vector<char>(m,'.'));

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            cin >> mp[i][j];
        }
    }

    int count = 0;

    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            if (mp[i][j]=='.'){
                dfs(i,j,mp);
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;


}