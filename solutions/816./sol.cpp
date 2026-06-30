// AiaSoft #816 — ტყუპი წევრები
// Complexity: O(n)
// Topics: Implementation, Sequences

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, k=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n-1; i++){
        if(a[i]%2!=0 && abs(a[i]-a[i+1])==2)k++;
    }
    cout<<k;

    return 0;
}