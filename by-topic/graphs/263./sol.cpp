// AiaSoft #263 — წვეროების რაოდენობა კომპონენტში
// Complexity: O(n²)
// Topics: Graphs, Recursion

#include <bits/stdc++.h>
using namespace std;

int n, m, v;
int g[21][21];
int used[21];
int ans;

int dfs(int v){
    used[v]=1;
    ans++;
    
    for(int k=1; k<=n; k++){
        if(g[v][k]==1 && used[k]==0)dfs(k);
    }
    
    return ans;
}

int main(){
    
    cin>>n>>m>>v;
    for(int i=0; i<m; i++){
        int u1, u2;
        cin>>u1>>u2;
        g[u1][u2]=g[u2][u1]=1;
    }
    
    cout<<dfs(v);
    
    return 0;
}