// AiaSoft #219 — შავუჯროვანი კუ
// Complexity: O(1)
// Topics: Implementation, Grid

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int a[8][8];
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            cin>>a[i][j];
        }
    }
    int ans=0;
    for(int i=1; i<8; i=i+2){
        for(int j=0; j<8; j=j+2){
            ans+=a[i][j];
        }
    }
    
    for(int i=0; i<8; i=i+2){
        for(int j=1; j<8; j=j+2){
            ans+=a[i][j];
        }
    }
    
    cout<<ans;
    
    return 0;
}