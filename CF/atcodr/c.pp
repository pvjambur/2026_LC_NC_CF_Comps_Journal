#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL);
    int n;
    string s;
    cin >> n >> s;
    deque<int> d;
    bool flip=false;
    for(int k=1; k<=n; k++){
        if(!flip) d.push_back(k);
        else d.push_front(k);
        if(s[k-1]=='o') flip=!flip;
    }
    if(flip) reverse(d.begin(), d.end());
    for(int i=0; i<n; i++){
        cout << d[i];
        if(i+1<n) cout << " ";
    }
    cout << endl;
    return 0;
}