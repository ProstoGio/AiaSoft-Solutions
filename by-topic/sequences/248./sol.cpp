// AiaSoft #248 — მასივის შემობრუნება
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
    n--;
    for(int i=n; i>=0; i--){
        cout<<a[i]<<" ";
    }


    return 0;
}