// AiaSoft #224 — გადათხრილი გზები
// Complexity: O(N + M)
// Topics: Graphs

#include <bits/stdc++.h>
using namespace std;
int n, m, a, b;
vector<int> g[1001];
vector<int> used(1001);
vector<int> d(1001);
vector<int> par(1001);

void bfs(int v){
    queue<int> q;
    q.push(v);
    used[v]=1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        
        for(int x : g[u]){
            if(!used[x]){
                q.push(x);
                used[x]=1;
                d[x]=d[u]+1;
                par[x]=u;
            }
        }
    }
    
}

int main(){
    
    cin>>n>>m>>a>>b;
    for(int i=0; i<m; i++){
        int v, u, ind;
        cin>>v>>u>>ind;
        if(ind==0){
            g[v].push_back(u);
            g[u].push_back(v);
        }    
    }
    
    bfs(a);
    if(used[b]==0){
        cout<<"NO";
    }else{
        cout<<"YES"<<endl;
        vector<int> path;
        path.push_back(b);
        int j=d[b];
        int k=par[b];
        while(j--){
            path.push_back(k);
            k=par[k];
        }
        reverse(path.begin(), path.end());
        for(int x : path){
            cout<<x<<" ";
        }
    }
    
   
    
    
    return 0;
}