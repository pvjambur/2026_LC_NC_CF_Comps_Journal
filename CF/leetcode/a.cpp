#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;
    cin>>a>>b;
    int n=a.size();
    if(n==1 && a[0]=='1' && b[0]=='0'){
        cout<<-1<<endl;
        return 0;
    }

    long long total=0;
    vector<int> pending;

    for(int pos=0; pos<n; pos++){
        if(a[pos]=='0' && b[pos]=='1'){
            total+=1;
        }
        else if(a[pos]=='1' && b[pos]=='0'){
            if(!pending.empty() && pending.back()==pos-1){
                pending.pop_back();
                total+=1;
            } else {
                pending.push_back(pos);
            }
        }
    }

    total += 2LL*pending.size();

    cout<<total<<endl;
    return 0;
}