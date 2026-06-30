// AiaSoft #671 — ბილეთების გაყიდვა
// Complexity: O(n)
// Topics: Dynamic Programming

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    int a[n][3];
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin>>a[i][j];
        }
    }
    
    int d[n];
    d[0]=a[0][0];
    d[1]=min((d[0]+a[1][0]), a[0][1]);
    d[2]=min({(d[1]+a[2][0]), (d[0]+a[1][1]), a[0][2]});
    
    for(int i=3; i<n; i++){
        d[i]=min({(d[i-1]+a[i][0]), (a[i-1][1]+d[i-2]), (a[i-2][2]+d[i-3])});
    }
    
    cout<<d[n-1];
    
    
    return 0;
}