// AiaSoft #298 — ცხენის სვლა
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;
int n, m, used[21][21], d[21][21], x1, y_1, x2, y2;

void bfs(int x, int y){
    queue<pair<int,int>> q;
    q.push({x, y});
    used[q.front().first][q.front().second]=1;
    
    while(!q.empty()){
        pair<int, int> co;
        co.first=q.front().first; 
        co.second=q.front().second;
        q.pop();
        if(co.first==x2 && co.second==y2){
            cout<<d[x2][y2];
            exit(0);
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
        if(co.first-1>=1 && co.second-2>=1 && used[co.first-1][co.second-2]==0){
            q.push({(co.first-1), (co.second-2)});
            used[co.first-1][co.second-2]=1;
            d[co.first-1][co.second-2]=d[co.first][co.second]+1;
        }
        if(co.first+1<=n && co.second-2>=1 && used[co.first+1][co.second-2]==0){
            q.push({(co.first+1), (co.second-2)});
            used[co.first+1][co.second-2]=1;
            d[co.first+1][co.second-2]=d[co.first][co.second]+1;
        } 
        
    }
    
    cout<<-1;
    
}

int main(){
    
    cin>>n>>m;
    cin>>x1>>y_1;
    cin>>x2>>y2;
    
    bfs(x1, y_1);
    
    
    
    return 0;
}