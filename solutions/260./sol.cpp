// AiaSoft #260 — მარყუჟი
// Complexity: O(n²)
// Topics: Implementation, Graphs

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int g[n+1][n+1];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>g[i][j];
        }
    }
    
    for(int i=1; i<=n; i++){
        if(g[i][i]==1){
            cout<<"YES";
            return 0;
        }
    }
    
    cout<<"NO";
    
    
    return 0;
}