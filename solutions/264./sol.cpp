// AiaSoft #264 — კომპონენტების რაოდენობა
// Complexity: O(M * α(N))
// Topics: Graphs, Implementation

#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> parent(100001);

int find_set(int v) {
    if (parent[v]==v)return v;
    return parent[v]=find_set(parent[v]);
}

void union_set(int v, int u){
    v=find_set(v);
    u=find_set(u);
    if(v!=u){
        parent[u]=v;
    }
}




int main(){
    
    cin>>n>>m;
    for(int i=1; i<=n; i++){
        parent[i]=i;
    }
    
    // for(int i=1; i<=n; i++){
    //     cout<<parent[i]<<" ";
    // }cout<<endl;
    
    for(int i=0; i<m; i++){
        int x, y;
        cin>>x>>y;
        union_set(x, y);
    }
    
 
    
    int cnt=0;
    for(int i=1; i<=n; i++){
        if(i==parent[i]){
            cnt++;
        }
        
    }
    
    cout<<cnt;
    
    
    
    return 0;
}