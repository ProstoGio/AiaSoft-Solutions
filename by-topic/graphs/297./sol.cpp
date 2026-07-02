// AiaSoft #297 — უმოკლესი გზა
// Complexity: O(N + M)
// Topics: Graphs

#include <bits/stdc++.h>
using namespace std;
int m, n, a, b;
vector<int> g[21];
vector<int> used(21);
vector<int> d(21);

void bfs(int v, int e){
    queue<int> q;
    q.push(v);
    used[v]=1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        
        if(u==e){
            cout<<d[u];
            exit(0);
        }
        
        for(int x : g[u]){
            if(!used[x]){
                q.push(x);
                used[x]=1;
                d[x]=d[u]+1;
            }
        }
    }
    
    cout<<-1;
}

int main(){
    
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int v, u;
        cin>>v>>u;
        g[v].push_back(u);
        g[u].push_back(v);
    }
    cin>>a>>b;
    
    bfs(a, b);
    // cout<<endl;
    // for(auto x : d){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    // for(int i=1; i<=n; i++){
    //     for(int j=0; j<g[n].size(); j++){
    //         cout<<g[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    
    
    
    return 0;
}