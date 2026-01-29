/*A. Carnival Wheel
time limit per test
1 second
memory limit per test
256 megabytes

You have a prize wheel divided into l sections, numbered from 0 to l−1. The sections are arranged in a circle, so after section l−1, the numbering continues again from section 0.

Initially, the prize pointer is at section a. Each time you spin the wheel, the pointer moves exactly b sections forward. That is, after one spin, the pointer moves from section a to section (a+b)modl, after two spins to (a+2b)modl, and so on∗.

You may spin the wheel any number of times (including zero). After you stop, the section where the pointer finally lands determines your prize: you receive an amount equal to the number of that section.

What is the maximum prize you can obtain?

∗Here, xmody denotes the remainder from dividing x by y.
Input

Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤500). The description of the test cases follows.

The first line of each test case contains three integers l,a, and b (1≤l,b≤5000, 0≤a≤l−1).
Output

For each test case, output the maximum prize that can be obtained.*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
private: 
    int gcd(int a, int b){
        if (b==0) return a;
        return gcd(b,a%b);
    }

public:
    int carnivalWheel(int l, int a, int b) {
        int g=gcd(l,b);
        int max_prize=((l-1 - a)%g==0)? l-1 : (l-1 - (l-1 - a)%g);
        return max_prize;
    }
};

int main(){
    int t;
    cin>>t;
    Solution sol;
    while (t--){
        int l,a,b;
        cin>>l>>a>>b;
        cout<<sol.carnivalWheel(l,a,b)<<endl;
    }
}
