// AiaSoft #216 — მარცხენა მთავარი დიაგონალი
// Complexity: O(n²)
// Topics: Implementation, Grid

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }
    
    int cnt=0;
    for(int k=0; k<n; k++){
        cnt+=a[k][k];
    }
    
    cout<<cnt;


    return 0;
}