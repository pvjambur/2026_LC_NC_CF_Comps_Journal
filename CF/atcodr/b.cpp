#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y,l,r,a,b;
    cin >> x >> y >> l >> r >> a >> b;
    int total=0;
    for(int h=a; h<b; h++){
        if(h>=l && h<r) total+=x;
        else total+=y;
    }
    cout << total << endl;
    return 0;

    fewgg
}