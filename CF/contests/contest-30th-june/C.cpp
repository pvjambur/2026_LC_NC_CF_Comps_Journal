#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        string s;
        cin >> n;
        cin >> s;

        int check = 1;
        for (int i=1;i<n;i++){
            if (s[i]!=s[i-1]) check++;
        }

        if (check==2) cout << 2 << endl;
        else cout << 1 << endl;
    }
    return 0;
}