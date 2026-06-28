// AiaSoft #920 — წყალდიდობა
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<vector<int>> g(500);
vector<int> used(500);

void dfs(int v){
    used[v]=1;
    for(auto x : g[v]){
        if(!used[x]){
            dfs(x);
        }
    }
}

int main() {
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    int cnt=0;
    for(int i=1; i<=n; i++){
        if(!used[i]){
            dfs(i);
            cnt++;
        }
    }
    
    cout<<cnt-1;
    
    
    


    return 0;
}