// AiaSoft #604 — შეკითხვები ტყეზე
// Complexity: O(N² + Q)
// Topics: Prefix Sums, Grid, Implementation

#include <bits/stdc++.h>
using namespace std;
int d[1000][1000];
int main(){
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin>>n>>q;
    char g[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>g[i][j];
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(g[i][j]=='*')d[i][j]++;
            if(i-1>=0)d[i][j]+=d[i-1][j];
            if(j-1>=0)d[i][j]+=d[i][j-1];
            if(j-1>=0 && i-1>=0)d[i][j]-=d[i-1][j-1];       
        }
    }
    
    while(q--){
        int x0, y0, x1, y1;
        cin>>x0>>y0>>x1>>y1;
        x0--; y0--;
        x1--; y1--;
        int ans=d[x1][y1];
        if(x0-1>=0 && y0-1>=0)ans+=d[x0-1][y0-1];
        if(x0-1>=0)ans-=d[x0-1][y1];
        if(y0-1>=0)ans-=d[x1][y0-1];
        
        cout<<ans<<endl;
    }
    
    
    
    return 0;
}