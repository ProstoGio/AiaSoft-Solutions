// AiaSoft #022 — ღრმად ძებნაში შესვლის და გამოსვლის დრო
// Complexity: O(m log m)
// Topics: Graphs, Recursion, Sorting

#include <bits/stdc++.h>
using namespace std;
int n, m, x;
vector<vector<int>> g(10001);
vector<int> used(10001);
vector<int> t_out(10001);
vector<int> t_in(10001);
int cnt_in, cnt_out;

void dfs(int v){
    used[v]=1;
    cnt_in++;
    t_in[v]=cnt_in;
    for(auto x : g[v]){
        if(!used[x]){
            dfs(x);
        }
    }
    cnt_out++;
    t_out[v]=cnt_out;
    
}


int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    cin>>n>>m;
    for(int i=0; i<m; i++){int u, v; cin>>u>>v; g[u].push_back(v);g[v].push_back(u);}
    for(int i=1; i<=n; i++){
        sort(g[i].begin(), g[i].end());
    }
    cin>>x;
    dfs(x);
    for(int i=1; i<=n; i++){
        if(!used[i]){
            dfs(i);
        }
    }
    for(int i=1; i<=n; i++){cout<<t_in[i]<<" ";}cout<<"\n";
    for(int i=1; i<=n; i++){cout<<t_out[i]<<" ";}
    
    
    return 0;
}