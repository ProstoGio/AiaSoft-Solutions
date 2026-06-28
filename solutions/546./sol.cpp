// AiaSoft #546 — ყველაზე შორს
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;
int n, mx=0;
vector<int> g[100001];
vector<int> used(100001);
vector<int> d(100001);

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
                if(d[x]>mx)mx=d[x];
            }
        }
    }
    
}

int main(){
        
    cin>>n;
    for(int i=0; i<n-1; i++){
        int u, v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    bfs(1);
    vector<int> ans;
    for(int i=1; i<=n; i++){
        if(d[i]==mx)ans.push_back(i);
    }
    cout<<ans.size()<<endl;
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }
    
    
    return 0;
}