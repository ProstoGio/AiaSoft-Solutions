// AiaSoft #217 — მთავარი დიაგონალები
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
    
    int ans=0;
    int k=n-1;
    for(int i=0; i<n; i++){
        ans+=a[i][i]+a[i][k];
        k--;
    }
    
    if(n%2!=0){
        int x=n/2;
        ans-=a[x][x];
        cout<<ans;
        return 0;
    }
    
    cout<<ans;


    return 0;
}