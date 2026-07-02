// AiaSoft #138 — მასივი 1
// Complexity: O(n)
// Topics: Implementation, Sequences

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int k=a[n-1];
    a[n-1]=a[0];
    a[0]=k;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    


    return 0;
}