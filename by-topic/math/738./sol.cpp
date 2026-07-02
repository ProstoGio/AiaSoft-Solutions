// AiaSoft #738 — ხელფასები
// Complexity: O(1)
// Topics: Math, Implementation

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int a, b, c;
    cin>>a>>b>>c;
    cout<<max({a,b,c})-min({a,b,c});


    return 0;
}