// AiaSoft #262 — წიბოების რაოდენობა
// Complexity: O(n²)
// Topics: Implementation, Graphs

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int g[n+1][n+1];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>g[i][j];
        }
    }
    
    int cnt1=0, cnt2=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==j){
                if(g[i][j]==1)cnt2++;
            }else{
                if(g[i][j]==1)cnt1++;
            }
        }
    }
    
    int cnt=cnt1/2 + cnt2;
    cout<<cnt;
    // cout<<endl<<cnt1<<" "<<cnt2;
    
    return 0;
}