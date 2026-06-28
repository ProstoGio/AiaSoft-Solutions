// AiaSoft #261 — მეზობლების მატრიცა
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n, m;
    cin>>n>>m;
    int g[n+1][n+1]={0};
    for(int i=0; i<m; i++){
        int v, u;
        cin>>v>>u;
        g[v][u]=g[u][v]=1;
    }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}