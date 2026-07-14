#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int max_c = 0;
        int cur_c = 0;
        for (int i=0;i<n;i++){
            if (s[i]=='#'){
                cur_c++;
                max_c = max(max_c,cur_c);
    
            }
            else{
                cur_c = 0;
            }
        }

        cout << ceil((double)max_c/2) << endl;
    }
    return 0;
}