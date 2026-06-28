// AiaSoft #301 — ლაბირინთი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;
int n, m, x, y, used[1001][1001], d[1001][1001];
char g[1001][1001];
//vector <char> path;

void bfs(int a, int b){
    queue <pair<int,int>> q;
    q.push({a,b});
    used[q.front().first][q.front().second]=1;
    while(!q.empty()){
        pair <int, int> co;
        co.first=q.front().first;
        co.second=q.front().second;
        q.pop();
        
        if(g[co.first][co.second]=='F'){
            cout<<d[co.first][co.second];
            exit(0);
        }
        
        if(co.first-1>=1 && g[co.first-1][co.second]!='X' && used[co.first-1][co.second]==0){
            q.push({(co.first-1), co.second});
            used[co.first-1][co.second]=1;
            d[co.first-1][co.second]=d[co.first][co.second]+1;
        }
        
        if(co.first+1<=n && g[co.first+1][co.second]!='X' && used[co.first+1][co.second]==0){
            q.push({(co.first+1), co.second});
            used[co.first+1][co.second]=1;
            d[co.first+1][co.second]=d[co.first][co.second]+1;
        }
        
        if(co.second+1<=m && g[co.first][co.second+1]!='X' && used[co.first][co.second+1]==0){
            q.push({co.first, (co.second+1)});
            used[co.first][co.second+1]=1;
            d[co.first][co.second+1]=d[co.first][co.second]+1;
        }
        
        if(co.second-1>=1 && g[co.first][co.second-1]!='X' && used[co.first][co.second-1]==0){
            q.push({co.first, (co.second-1)});
            used[co.first][co.second-1]=1;
            d[co.first][co.second-1]=d[co.first][co.second]+1;
        }
    }
    
    //cout<<-1;
}

 
 
int main(){
    
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>g[i][j];
            if(g[i][j]=='S'){
                x=i;
                y=j;
            }
        }
    }
    
    bfs(x,y);
    
    
    
    return 0;
}
