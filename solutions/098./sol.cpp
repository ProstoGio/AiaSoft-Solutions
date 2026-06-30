// AiaSoft #098 — მაქსიმალური სხვაობა
// Complexity: O(n log n)
// Topics: Sorting, Sequences

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    sort(a.begin(), a.end());
    int mx=0;
    for(int i=0; i<n-1; i++){
        mx=max(mx,a[i+1]-a[i]);
    }
    
    cout<<mx;
    
    
    return 0;
}