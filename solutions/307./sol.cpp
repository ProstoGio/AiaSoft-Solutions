// AiaSoft #307 — ჯამი მატრიცაში
// Complexity: O(N * M + Q)
// Topics: Prefix Sums, Grid

#include <bits/stdc++.h>
using namespace std;

int a[1001][1001];
int d[1001][1001];

int main() {
    
    int n, m;
    cin>>n>>m;
    
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin>>a[i][j];
        }
    }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            d[i][j]=d[i][j-1]+d[i-1][j]-d[i-1][j-1]+a[i][j];
        }
    }
    
    int q;
    cin>>q;
    int c[q];
    for(int k=0; k<q; k++){
        int x, y;
        cin>>x>>y;
        c[k]=d[x][y];
    }
    
    for(int k=0; k<q; k++){
        cout<<c[k]<<endl;
    }


    return 0;
}