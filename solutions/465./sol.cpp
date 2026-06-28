// AiaSoft #465 — უდიდესი კომპონენტის წვეროები
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> g[21];
vector<int> used(21);
vector<int> ans;
vector<int> placeHolder;

void dfs(int v){
    used[v]=1;
    placeHolder.push_back(v);
    for(int x : g[v]){
        if(!used[x]){
            dfs(x);
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
        if(!used[i]){
            dfs(i);
            if(placeHolder.size()>ans.size()){
                ans=placeHolder;
            }
            placeHolder.clear();
        }
    }
    sort(ans.begin(), ans.end());
    
    for(int x : ans){
        cout<<x<<" ";
    }
    
    
    
    
    
    return 0;
}