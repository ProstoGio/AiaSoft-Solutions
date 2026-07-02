// AiaSoft #320 — ტალღა მატრიცაში
// Complexity: O(N*M)
// Topics: Graphs, Grid

#include <bits/stdc++.h>
using namespace std;
int n, m, x, y, used[1001][1001], d[1001][1001];

void bfs(int a, int b){
    queue<pair<int,int>> q;
    q.push({a, b});
    used[q.front().first][q.front().second]=1;
    
    while(!q.empty()){
        pair<int,int> co;
        co.first=q.front().first;
        co.second=q.front().second;
        q.pop();
        
        if(co.first-1>=1 && used[co.first-1][co.second]==0){
            q.push({(co.first-1), co.second});
            used[co.first-1][co.second]=1;
            d[co.first-1][co.second]=d[co.first][co.second]+1;
        }
        
        if(co.first+1<=n && used[co.first+1][co.second]==0){
            q.push({(co.first+1), co.second});
            used[co.first+1][co.second]=1;
            d[co.first+1][co.second]=d[co.first][co.second]+1;
        }
        
        if(co.second+1<=m && used[co.first][co.second+1]==0){
            q.push({co.first, (co.second+1)});
            used[co.first][co.second+1]=1;
            d[co.first][co.second+1]=d[co.first][co.second]+1;
        }
        
        if(co.second-1>=1 && used[co.first][co.second-1]==0){
            q.push({co.first, (co.second-1)});
            used[co.first][co.second-1]=1;
            d[co.first][co.second-1]=d[co.first][co.second]+1;
        }
        
        if(co.first-1>=1 && co.second-1>=1 && used[co.first-1][co.second-1]==0){
            q.push({(co.first-1), (co.second-1)});
            used[co.first-1][co.second-1]=1;
            d[co.first-1][co.second-1]=d[co.first][co.second]+1;
        }
        
        if(co.first+1<=n && co.second+1<=m && used[co.first+1][co.second+1]==0){
            q.push({(co.first+1), (co.second+1)});
            used[co.first+1][co.second+1]=1;
            d[co.first+1][co.second+1]=d[co.first][co.second]+1;
        }
        
        if(co.first-1>=1 && co.second+1<=m && used[co.first-1][co.second+1]==0){
            q.push({(co.first-1), (co.second+1)});
            used[co.first-1][co.second+1]=1;
            d[co.first-1][co.second+1]=d[co.first][co.second]+1;
        }
        
        if(co.first+1<=n && co.second-1>=1 && used[co.first+1][co.second-1]==0){
            q.push({(co.first+1), (co.second-1)});
            used[co.first+1][co.second-1]=1;
            d[co.first+1][co.second-1]=d[co.first][co.second]+1;
        }
    }
}

int main(){
    
    cin>>n>>m>>x>>y;
    bfs(x, y);
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    
    return 0;
}