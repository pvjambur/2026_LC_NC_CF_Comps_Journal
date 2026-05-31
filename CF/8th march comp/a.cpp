#include <iostream>
using namespace std;

int main(){
    int n=0;
    cin>>n;
    while(n--){
        int l=0;
        string s;
        cin>>l>>s;
        int onecount=0;
        
        for (int i=0;i<l;i++){
            if (s[i]=='1'){
                onecount++;
            }
        }
        int maxcount=onecount;
        for (int i=0;i<l;i++){
            if (i>0 && i<l-1 && s[i-1]=='1' && s[i+1]=='1' && s[i]=='0'){
                maxcount++;
                s[i]='1';
            }
        }
        int mincount=maxcount;
        for (int i=0;i<l;i++){
            if (i>0 && i<l-1 && s[i-1]=='1' && s[i+1]=='1' && s[i]=='1'){
                mincount--;
                s[i]='0';
            }
        }
        cout<<mincount<<" "<<maxcount<<endl;
    }
    return 0;
}