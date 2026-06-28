// AiaSoft #530 — გზის აშენება
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;
int n, m, roads;
vector <int> g[100001];
vector <int> used(100001);
int node;
 
void dfs(int v){
    used[v]=1;
    node=v;
    for(auto x : g[v]){
        if(used[x]==0){
            dfs(x);
        }
    }
}
 
int main(){
    
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    vector <int> rd;
    for(int i=1; i<=n; i++){
        if(used[i]==0){
            roads++;
            dfs(i);
            rd.push_back(node);
        }
    }
    
    roads--;
    
    cout<<roads<<endl;
    for(int i=0; i<roads; i++){
        cout<<rd[i]<<" "<<rd[i+1]<<endl;
    }
 
 
    return 0;
}