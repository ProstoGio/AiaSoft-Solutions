// AiaSoft #382 — საგუშაგოები
// Complexity: O(N + M)
// Topics: Graphs, Greedy

#include <bits/stdc++.h>

using namespace std;

long long Q = 1000000000 + 7;
vector <int> G[100001], Gr[100001]; vector <long long> a; unsigned long long mn=0;
vector <int> used,used1; int n,m; vector <int> t_out; unsigned long long cnt=0; long long x,ans,sum=0;
void DFS(int v){
    used[v]=1; 
    for(int k:G[v])
        if(used[k]==0) DFS(k);
    t_out.push_back(v);
}
void DFS1(int v){
    used[v]=1; 
    if (a[v] < ans){
        ans = a[v];
        sum = 1;
    }else if (a[v] == ans){
        sum++;
    }
    for(int k:Gr[v])
        if(used[k]==0) DFS1(k);
}
     
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
    cin>>n; a.push_back(0);
    for(int k=1; k<=n; k++){int c; cin>>c; a.push_back(c); }
    cin>>m;
    used.resize(n+1); used1.resize(n+1);
    for(int k=1; k<=m; k++){
        int a,b; cin>>a>>b;
        G[a].push_back(b);
        Gr[b].push_back(a);
    }
    for(int k=1; k<=n; k++)
        if(used[k]==0)  DFS(k);
    used.assign(n+1,0); cnt=1;
    used1.assign(n+1,0);
    for(int k=0; k<n; k++){
        x=t_out[n-k-1]; ans=INT_MAX;
        if(used[x]==0){
         sum=0; DFS1(x);
        mn+=ans; cnt=(cnt*sum)%Q;
        }
    }
    cout<<mn<<' '<<cnt%Q;

    return 0;
}