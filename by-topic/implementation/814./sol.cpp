// AiaSoft #814 — ლამაზი წევრები
// Complexity: O(n)
// Topics: Implementation

#include <bits/stdc++.h>

using namespace std;

int main() {   
    int n, k=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=1; i<=n-1; i++){
        if(a[i]%2==0 && (a[i-1]+a[i+1])%2==0 && (a[i-1]+a[i+1])/2==a[i])k++;
    }
    if(k==0)cout<<-1;
    else cout<<k;

//
    return 0;
}