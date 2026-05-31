#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    unordered_set<int> s;
    cout << n;
    if (n==1){
        cout << endl;
        return 0;
    }
    else{
        cout << " ";
    }
    while(!s.count(n)){
        s.insert(n);
        if (n%2==0) n=n/2;
        else n = 3*n+1;
        cout << n;
        if (n!=1) cout << " ";
        else{
            cout << endl;
            break;
        }
    }
    return 0;
}