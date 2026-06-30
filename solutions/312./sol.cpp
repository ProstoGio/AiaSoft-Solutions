// AiaSoft #312 — უბრალოდ უმოკლესი მანძილი
// Complexity: O(M * (N + M))
// Topics: Graphs

#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> g[1001];
vector<int> d(1001, INT_MAX);
vector<int> used(1001);

void bfs(int a){
    queue<int> q;
    q.push(a);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        
        for(int x : g[u]){
            if(d[u]+1<d[x] || used[x]==0){
                d[x]=d[u]+1;
                used[x]=1;
                q.push(x);
            }
        }
    }
    
}

int main(){
    ios_base::sync_with_stdio(false);
    
    cin>>n>>m;
    d[1]=0;
    used[1]=1;
    for(int i=0; i<m; i++){
        int z;
        cin>>z;
        if(z==2){
            int v, u;
            cin>>v>>u;
            g[v].push_back(u);
            if(used[v]!=0){
            if(used[u]==0){
                d[u]=d[v]+1;
                used[u]=1;
                bfs(u);
            }else if(d[v]+1<d[u]){
                    d[u]=d[v]+1;
                    used[u]=1;
                    bfs(u);
                }
            }
        }else if(z==1){
            int a;
            cin>>a;
            if(used[a]==0)cout<<-1<<endl;
                else cout<<d[a]<<endl;
        }
    }
    
    
    return 0;
}