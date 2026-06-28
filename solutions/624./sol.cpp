// AiaSoft #624 — წიბოს ხარისხი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;
long long n;
vector<long long> g[100001];
vector<long long> used1(100001);
vector<long long> leaves(100001);

void dfsL(long long v, long long p){
    used1[v]=1;
    leaves[v]++;
    for(int x : g[v]){
        if(!used1[x]){
            dfsL(x, v);
        }
    }
    leaves[p]+=leaves[v];
    
}

int main(){
    
    cin>>n;
    vector<long long> ans(n-1);
    vector<pair<long long, long long>> edges(n-1);
    for(int i=0; i<n-1; i++){
        int v, u;
        cin>>v>>u;
        g[v].push_back(u);
        g[u].push_back(v);
        edges[i]={v, u};
    }
    
    dfsL(1, 1);
    
    for(long long i=0;i<n-1;i++){
        long long u=edges[i].first;
        long long v=edges[i].second;
        long long cnt=min(leaves[u], leaves[v]);
        ans[i]=cnt*(n-cnt);
    }
    
    for(long long i=0; i<n-1; i++){
        cout<<ans[i]<<endl;
    }
    
    return 0;
}