// AiaSoft #798 — დათვალე ბურთები
// Complexity: O(1)
// Topics: Math, Implementation

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    long long n, a, b, ans, m, r;
    cin>>n>>a>>b;
    m=n/(a+b);
    r=n%(a+b);
    ans=m*a+min(r, a);
    cout<<ans;


    return 0;
}




// 14