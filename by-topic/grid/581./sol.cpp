// AiaSoft #581 — სიმპატიური მატრიცა
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int c[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>c[i][j];
            }
        }
        
        bool ind=true;
        for(int i=0; i<n-1; i++){
            for(int j=0; j<m-1; j++){
                if(c[i][j]==c[i+1][j] && c[i][j]==c[i+1][j+1] && c[i][j]==c[i][j+1]){
                    ind=false;
                    break;
                }
            }
            if(!ind)break;
        }
        
        if(ind)cout<<"YES\n";
            else cout<<"NO\n";
    }
    
    
    return 0;
}