// AiaSoft #269 — ხე
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;
int m, n, a, b, ind;
vector<int> g[21];
vector<int> used(21);

void dfs(int v, int par){
    used[v]=1;
    for(int x : g[v]){
        if(!used[x]){
            used[x]=1;
            dfs(x, v);
        }else if(used[x]==1){
            if(x!=par){
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
            ind++;
            dfs(i, i);
        }
    }
    
    if(ind==1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
    return 0;
}