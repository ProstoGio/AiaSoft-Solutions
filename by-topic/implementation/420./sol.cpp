// AiaSoft #420 — საფეხურები
// Complexity: O(1)
// Topics: Math, Implementation

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long ans, n, a, b, c, x;
    cin>>n;
    cin>>a>>b>>c;
    x=(b-a)+(b-c);
    ans=x*n;
    cout<<ans;
    
    
    cout<<"\n";
    return 0;
}