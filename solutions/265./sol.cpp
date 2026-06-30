// AiaSoft #265 — უდიდესი კომპონენტი
// Complexity: O(n²)
// Topics: Graphs, Implementation, Sets

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
    
    // for(int i=1; i<=n; i++){
    //     cout<<parent[i]<<" ";
    // }cout<<endl;
    
    for(int i=0; i<m; i++){
        int x, y;
        cin>>x>>y;
        union_set(x, y);
    }
    
    for(int i=1; i<=n; i++){
        parent[i]=find_set(i);
    }
    
  
    
    
    
    int cnt=0, mx=0;
    for(int i=1; i<=n; i++){
        if(parent[i]==i){
            for(int j=1; j<=n; j++){
                if(parent[j]==i)cnt++;
            }
            if(cnt>mx)mx=cnt;
            cnt=0;
        }
    }
    
    cout<<mx;
    
    
    
    return 0;
}