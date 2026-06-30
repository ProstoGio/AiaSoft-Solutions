// AiaSoft #609 — i-ური ბიტი
// Complexity: O(1)
// Topics: Bit Manipulation

#include <bits/stdc++.h>

using namespace std;

int main() {
    long long x, k;
    cin>>x>>k;
    cout<<((x>>k)&1);
    

    return 0;
}