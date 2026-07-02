// AiaSoft #532 — მოხეტიალე ცხენი
// Complexity: O(N * M)
// Topics: Graphs, Grid

#include <bits/stdc++.h>
using namespace std;
int n, m, used[51][51], d[51][51];
char g[51][51];

void bfs(int x, int y){
    queue<pair<int,int>> q;
    q.push({x, y});
    used[q.front().first][q.front().second]=1;
    
    while(!q.empty()){
        pair<int, int> co;
        co.first=q.front().first; 
        co.second=q.front().second;
        q.pop();
        
        if(co.first==n && co.second==m){
            cout<<d[n][m];
            exit(0);
        }
        
        
        if(g[co.first][co.second]=='R'){
            if(co.first-2>=1 && co.second+1<=m && used[co.first-2][co.second+1]==0){
                q.push({(co.first-2), (co.second+1)});
                used[co.first-2][co.second+1]=1;
                d[co.first-2][co.second+1]=d[co.first][co.second]+1;
            }
            if(co.first-1>=1 && co.second+2<=m && used[co.first-1][co.second+2]==0){
                q.push({(co.first-1), (co.second+2)});
                used[co.first-1][co.second+2]=1;
                d[co.first-1][co.second+2]=d[co.first][co.second]+1;
            }
            if(co.first+1<=n && co.second+2<=m && used[co.first+1][co.second+2]==0){
                q.push({(co.first+1), (co.second+2)});
                used[co.first+1][co.second+2]=1;
                d[co.first+1][co.second+2]=d[co.first][co.second]+1;
            }
            if(co.first+2<=n && co.second+1<=m && used[co.first+2][co.second+1]==0){
                q.push({(co.first+2), (co.second+1)});
                used[co.first+2][co.second+1]=1;
                d[co.first+2][co.second+1]=d[co.first][co.second]+1;
            }
        }
        
        if(g[co.first][co.second]=='L'){
            if(co.first-2>=1 && co.second-1>=1 && used[co.first-2][co.second-1]==0){
                q.push({(co.first-2), (co.second-1)});
                used[co.first-2][co.second-1]=1;
                d[co.first-2][co.second-1]=d[co.first][co.second]+1;
            }
            if(co.first+2<=n && co.second-1>=1 && used[co.first+2][co.second-1]==0){
                q.push({(co.first+2), (co.second-1)});
                used[co.first+2][co.second-1]=1;
                d[co.first+2][co.second-1]=d[co.first][co.second]+1;
            }
            if(co.first+1<=n && co.second-2>=1 && used[co.first+1][co.second-2]==0){
                q.push({(co.first+1), (co.second-2)});
                used[co.first+1][co.second-2]=1;
                d[co.first+1][co.second-2]=d[co.first][co.second]+1;
            }
            if(co.first-1>=1 && co.second-2>=1 && used[co.first-1][co.second-2]==0){
                q.push({(co.first-1), (co.second-2)});
                used[co.first-1][co.second-2]=1;
                d[co.first-1][co.second-2]=d[co.first][co.second]+1;
            }
        }
        
        if(g[co.first][co.second]=='D'){
            if(co.first+1<=n && co.second+2<=m && used[co.first+1][co.second+2]==0){
                q.push({(co.first+1), (co.second+2)});
                used[co.first+1][co.second+2]=1;
                d[co.first+1][co.second+2]=d[co.first][co.second]+1;
            }
            if(co.first+1<=n && co.second-2>=1 && used[co.first+1][co.second-2]==0){
                q.push({(co.first+1), (co.second-2)});
                used[co.first+1][co.second-2]=1;
                d[co.first+1][co.second-2]=d[co.first][co.second]+1;
            }
            if(co.first+2<=n && co.second+1<=m && used[co.first+2][co.second+1]==0){
                q.push({(co.first+2), (co.second+1)});
                used[co.first+2][co.second+1]=1;
                d[co.first+2][co.second+1]=d[co.first][co.second]+1;
            }
            if(co.first+2<=n && co.second-1>=1 && used[co.first+2][co.second-1]==0){
                q.push({(co.first+2), (co.second-1)});
                used[co.first+2][co.second-1]=1;
                d[co.first+2][co.second-1]=d[co.first][co.second]+1;
            }
        }
        
        if(g[co.first][co.second]=='U'){
            if(co.first-1>=1 && co.second+2<=m && used[co.first-1][co.second+2]==0){
                q.push({(co.first-1), (co.second+2)});
                used[co.first-1][co.second+2]=1;
                d[co.first-1][co.second+2]=d[co.first][co.second]+1;
            }
            if(co.first-1>=1 && co.second-2>=1 && used[co.first-1][co.second-2]==0){
                q.push({(co.first-1), (co.second-2)});
                used[co.first-1][co.second-2]=1;
                d[co.first-1][co.second-2]=d[co.first][co.second]+1;
            }
            if(co.first-2>=1 && co.second+1<=m && used[co.first-2][co.second+1]==0){
                q.push({(co.first-2), (co.second+1)});
                used[co.first-2][co.second+1]=1;
                d[co.first-2][co.second+1]=d[co.first][co.second]+1;
            }
            if(co.first-2>=1 && co.second-1>=1 && used[co.first-2][co.second-1]==0){
                q.push({(co.first-2), (co.second-1)});
                used[co.first-2][co.second-1]=1;
                d[co.first-2][co.second-1]=d[co.first][co.second]+1;
            }
        }
    }
    
    cout<<-1;
    
}

int main(){
    
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>g[i][j];
        }
    }
    
    
    bfs(1,1);
    
    
    
    return 0;
}