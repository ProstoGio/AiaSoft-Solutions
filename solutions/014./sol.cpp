// AiaSoft #014 — ლუწი ხე
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> g[101];
vector<int> used(101);
vector<int> leaves(101);

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
    
    cin>>n;
    for(int i=0; i<n-1; i++){
        int v, u;
        cin>>v>>u;
        g[v].push_back(u);
        g[u].push_back(v);
    }
    
    dfs(1, 1);
    // for(int i=2; i<=n; i++){
    //     cout<<i<<" "<<leaves[i]<<endl;
    // }
    int cnt=0;
    for(int i=2; i<=n; i++){
        if(leaves[i]%2==0){
            cnt++;
        }
    }
    cout<<cnt;
    
    
    return 0;
}