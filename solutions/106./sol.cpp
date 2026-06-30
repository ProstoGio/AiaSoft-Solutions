// AiaSoft #106 — ლიდერები
// Complexity: O(n)
// Topics: Implementation, Greedy, Sequences

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++){
        cin>>a[i];
    }
    int b[n]; 
    b[0]=a[n-1]; 
    int k=1; 
    for (int i=n-2; i>=0; i--){
        if (a[i]>=b[k-1]){
            b[k]=a[i];
            k++;
        }
    }
    for(int i=k-1; i>=0; i--){
        cout<<b[i]<<" ";
    }

    return 0;
}