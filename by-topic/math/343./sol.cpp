// AiaSoft #343 — საბავშვო მოედანი 3
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
#define ff first
#define ss second
using namespace std;

int main() {
    int n;
    cin>>n;
    int a, b, c;
    cin>>a>>b>>c;
    
    vector<pair<int,int>> v(n+1);
    v[1]={10, 2}; v[n]={n-1, 1};
    for(int i=2; i<n; i++){
        v[i]={i-1, i+1};
    }
    
    if((v[a].ff==b && v[a].ss==c) || (v[a].ff==c && v[a].ss==b) || (v[b].ff==a && v[b].ss==c) || (v[b].ff==c && v[b].ss==a) || (v[c].ff==b && v[c].ss==a) || (v[c].ff==a && v[a].ss==b)){
        cout<<"YES\n";
        return 0;
    }
    
    cout<<"NO\n";
    return 0;
}