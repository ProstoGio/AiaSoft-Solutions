// AiaSoft #628 — კლონების არმია
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;
int n, m, x;
vector<int> g[200002];
//vector<int> used(200002);
vector<int> weights(200002);
vector<int> dp(200002);

void bfs(int v){
    queue<int> q;
    if(x>weights[v])dp[v]=x;
        else dp[v]=x/2;
    q.push(v);
    //used[v]=1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        
        for(int k : g[u]){
            int nc;
            if(dp[u]>weights[k])nc=dp[u];
                else nc=dp[u]/2;
                
            if(nc>dp[k]){
                dp[k]=nc;
                q.push(k);
            }
        }
    }
    
}

int main(){
    
    cin>>n>>m;
    for(int i=0; i<m; i++){
        int v, u;
        cin>>v>>u;
        g[v].push_back(u);
        g[u].push_back(v);
    }
    cin>>x;
    for(int i=1; i<=n; i++){
        cin>>weights[i];
    }
    
    bfs(1);
    
    cout<<dp[n];

    
   
    
    
    return 0;
}