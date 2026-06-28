// AiaSoft #662 — ტყე
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> g[100001];
vector<int> used(100001);
vector<int> leaves(100001);

void dfs(int v, int p){
    used[v]=1;
    leaves[v]++;
    for(int x : g[v]){
        if(!used[x]){
            dfs(x, v);
        }
    }
    leaves[p]+=leaves[v];
    
}

int main(){
    
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int v, u;
        cin>>v>>u;
        g[v].push_back(u);
        g[u].push_back(v);
    }
    
    dfs(1, 1);
    int cnt=0;
    for(int i=2; i<=n; i++){
        if(leaves[i]%2==0){
            cnt++;
        }
    }
    cout<<cnt;
    
    
    return 0;
}