// AiaSoft #311 — ძლიერი სამეფო
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;
const int INF=1e9;
int n, m, t;
vector<vector<pair<int,int>>> g(100001);
vector<int> used;
vector<int> d;

void dijkstra(int s){
    d[s]=0;
    for(int i=1; i<=n; i++){
        int k=INF, v=-1;
        for(int t=1; t<=n; t++){
            if(d[t]<=k && used[t]==0){
                k=d[t];
                v=t;
            }
        }
        
        used[v]=1;
        for(int j=0; j<g[v].size(); j++){
            int x=g[v][j].first;
            int w=g[v][j].second;
            
            d[x]=min(d[x], d[v]+w);
        }
    }
    
}

int main(){
    
    cin>>n>>m>>t;
    for(int i=0; i<m; i++){
        int u, v, l;
        cin>>u>>v>>l;
        g[u].push_back({v,l});
        g[v].push_back({u,l});
    }
    
    for(int i=1; i<=n; i++){
        used.resize(n+1, 0);
        d.resize(n+1, INF);
        dijkstra(i);
        //cout<<i<<"_ ";
        for(int j=1; j<=n; j++){
            //cout<<d[j]<<" ";
            if(d[j]>t || d[j]==INF){
                cout<<"no"<<endl;
                return 0;
            }
        }
        //cout<<endl;
        used.clear();
        d.clear();
    }
    
    cout<<"yes"<<endl;
    
    
    
    
    
    
    return 0;
}