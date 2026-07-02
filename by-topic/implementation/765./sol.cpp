// AiaSoft #765 — დიაპაზონი
// Complexity: O(N + M + max(V))
// Topics: Implementation, Prefix Sums

#include <bits/stdc++.h>
using namespace std;
int n, m, mx=-1;
vector<int> v;
vector<int> s;
vector<int> s2;

int main(){
    
    cin>>n;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        v.push_back(a);
        mx=max(mx, a);
    }
    s.resize(mx+1, 0);
    s2.resize(mx+1, 0);
    for(int j=0; j<v.size(); j++){
        s[v[j]]++;
    }
    
    s2[0]=s[0];
    int varr=s2[0];
    for(int i=1; i<mx+1; i++){
        s2[i]=varr;
        varr+=s[i];
    }
    
    
    // for(int i=0; i<mx+1; i++){
    //     cout<<s[i]<<" ";
    // }cout<<"\n";
    // for(int i=0; i<mx+1; i++){
    //     cout<<s2[i]<<" ";
    // }cout<<"\n";
    cin>>m;
    for(int i=0; i<m; i++){
        int x, y;
        cin>>x>>y;
        if(y>mx && x>mx){
            cout<<0<<"\n";
            continue;
        }else if(y>mx)y=mx;
                else if(x>mx){
                    cout<<0<<"\n";
                    continue;
                }
        cout<<s2[y]-s2[x]+s[y]<<"\n";
    }
    
    
    return 0;
}