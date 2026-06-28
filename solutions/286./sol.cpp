// AiaSoft #286 — სინონიმები
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

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
    
    for(int i=1; i<=n; i++){
        parent[i]=find_set(i);
    }
    
 
    
    int cnt=0;
    for(int i=1; i<=n; i++){
        if(i==parent[i]){
            cnt++;
        }
        
    }
    
    cout<<cnt<<" ";
    
    int cnt2=0, mx=0;
    for(int i=1; i<=n; i++){
        if(parent[i]==i){
            for(int j=1; j<=n; j++){
                if(parent[j]==i)cnt2++;
            }
            if(cnt2>mx)mx=cnt2;
            cnt2=0;
        }
    }
    
    cout<<mx;
    
    return 0;
}