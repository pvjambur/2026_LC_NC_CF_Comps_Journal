class Solution {
private:
    int wavi(string s){
        int n = s.size();
        if (n<=2) return 0;
        int count = 0;
        for (int i=1;i<=n-2;i++){
            if ((s[i-1]<s[i] && s[i]>s[i+1]) || (s[i-1]>s[i] && s[i]<s[i+1])) count++;
        }
        return count;
    }

public:
    int totalWaviness(int num1, int num2) {
        int count = 0;
        for (int x=num1;x<=num2;x++){
            count += wavi(to_string(x));
        }
        return count;
    }
};