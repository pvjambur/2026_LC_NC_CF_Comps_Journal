#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long x;
        cin >> x;
        string s = to_string(x);
        int d = s.size();
        long long y = 1;
        for (int i=0;i<d;i++) y*=10;
        y+=1;
        cout << y << endl;
    }
    return 0;
}