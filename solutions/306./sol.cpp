// AiaSoft #306 — მარიამის დაბადების დღე
// Complexity: O(N + M)
// Topics: Graphs, Recursion

#include <bits/stdc++.h>
using namespace std;
int m, n, a, b;
vector<int> g[21];
vector<int> used(21);
vector<int> color(21);

void dfs(int v, int c){
    used[v]=1;
    color[v]=c;
    for(int x : g[v]){
        if(!used[x]){
            if(color[v]==1){
                dfs(x, 0);
            }else{
                dfs(x, 1);
            }
        }else{
            if(used[x]==1 && color[x]==c){
                cout<<"NO";
                exit(0);
            }
        }
    }
}

int main(){
    
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int v, u;
        cin>>v>>u;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    for(int i=1; i<=n; i++){
        if(used[i]==0){
            dfs(i, 1);
        }
    }
    
    cout<<"YES";
    
    return 0;
}