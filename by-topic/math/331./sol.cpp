// AiaSoft #331 — გამყოფები
// Complexity: O(n)
// Topics: Math, Number Theory, Implementation

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, i=1;
    cin>>n;
    while(i<=n){
        if(n%i==0)cout<<i<<" ";
        i++;
    }

    return 0;
}