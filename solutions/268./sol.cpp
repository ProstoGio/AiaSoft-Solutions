// AiaSoft #268 — ციკლი გრაფში
// Complexity: O(m * α(n))
// Topics: Graphs, Sets

#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> parent(21);

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
    
    for(int i=1; i<=m; i++){
        int x, y;
        cin>>x>>y;
        
        int px=find_set(x);
        int py=find_set(y);
        if(px==py){
            cout<<"YES";
            return 0;
        }
        union_set(x, y);
        // for(int i=1; i<=n; i++){
        //     cout<<parent[i]<<" ";
        // }cout<<endl;
    }
    
    // for(int i=1; i<=n; i++){
    //     parent[i]=find_set(i);
    // }
    cout<<"NO";
  
    return 0;
}