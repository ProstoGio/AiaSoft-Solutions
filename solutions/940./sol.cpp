// AiaSoft #940 — მარტივი ციკლები
// Complexity: O(M * α(N))
// Topics: Graphs, Sets

#include <bits/stdc++.h>
using namespace std;
vector<int> parent;

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
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        parent.resize(n+1);
        for(int i=1; i<=n; i++){
            parent[i]=i;
        }
        int cnt=0;
        for(int i=1; i<=m; i++){
            int x, y;
            cin>>x>>y;
            
            int px=find_set(x);
            int py=find_set(y);
            if(px==py){
                cnt++;
            }
            union_set(x, y);
        }
        cout<<cnt<<"\n";
    }
  
    return 0;
}