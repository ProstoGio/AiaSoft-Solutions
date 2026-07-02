// AiaSoft #547 — ფოთლები
// Complexity: O(n)
// Topics: Graphs, Trees, Implementation

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    
    ll n, m;
    cin>>n;
    vector<int> g[n];
    for(ll i=0; i<n-1; i++){
        int u, v;
        cin>>u>>v;
        u--; v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    ll cnt=0;
    for(ll i=1; i<n; i++){
        if(g[i].size()==1)cnt++;
    }
    
    // for(int i=1; i<=n; i++){
    //     cout<<i<<" ";
    //     for(int j=0; j<g[i].size(); j++){
    //         cout<<g[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    cout<<cnt;
    
    
    return 0;
}