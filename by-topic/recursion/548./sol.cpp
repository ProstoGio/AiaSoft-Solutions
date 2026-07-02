// AiaSoft #548 — ოთახების დათვლა
// Complexity: O(n * m)
// Topics: Graphs, Grid, Recursion

#include <bits/stdc++.h>
using namespace std;
int n, m, cnt;
char g[1001][1001];
int used[1001][1001];

void DFS(int i, int j){
    used[i][j]=1;
    if(i > 1 && g[i-1][j] == '.' && used[i-1][j] == 0)DFS(i-1, j);
    if(i < n && g[i+1][j] == '.' && used[i+1][j] == 0)DFS(i+1, j);
    if(j > 1 && g[i][j-1] == '.' && used[i][j-1] == 0)DFS(i, j-1);
    if(j < m && g[i][j+1] == '.' && used[i][j+1] == 0)DFS(i, j+1);
    
}


int main(){
    
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>g[i][j];
        }
    }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(g[i][j]=='.' && used[i][j]==0){
                DFS(i, j);
                cnt++;
            }
        }
    }
    
    cout<<cnt;
    
    
    
    return 0;
}