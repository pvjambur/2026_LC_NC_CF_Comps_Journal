#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long tot = (n*(n+1))/2;

    for (int i=0;i<n-1;i++){
        long long temp;
        cin >> temp;
        tot -= temp;
    }
    cout << tot << endl;
    return 0;
}