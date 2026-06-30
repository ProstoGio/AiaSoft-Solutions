// AiaSoft #826 — სამნიშნას უდიდესი
// Complexity: O(1)
// Topics: Math, Implementation

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int num, first, sec, third;
    cin>>num;
    first=num/100;
    sec=num/10 %10;
    third=num%10;
    int mx=max({first, sec, third});
    cout<<mx;


    return 0;
}