// AiaSoft #376 — კომპონენტები
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n, m;
vector<ll> p(10001);
vector<ll> sz(10001);
multiset<ll> st;
ll find_set(ll v){
    if(p[v]==v)return v;
    return p[v]=find_set(p[v]);
}

void union_set(ll a, ll b){
    a=find_set(a);
    b=find_set(b);
    if(a!=b){
        if(sz[a]<sz[b]){
            swap(a,b);
        }
        st.erase(st.find(sz[a]));
        st.erase(st.find(sz[b]));
        
        
        p[b]=a;
        sz[a]+=sz[b];
        
        st.insert(sz[a]);
    }
}

int main(){
    
    cin>>n>>m;
    for(ll i=1; i<=n; i++){
        p[i]=i;
        sz[i]=1;
        st.insert(1);
    }
    for(ll i=1; i<=m; i++){
        ll u, v;
        cin>>u>>v;
        union_set(u, v);
        
        for(auto x : st){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
    
    
    return 0;
}