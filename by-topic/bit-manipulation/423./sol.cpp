// AiaSoft #423 — ორი ერთიანი
// Complexity: O(log² N)
// Topics: Bit Manipulation, Implementation

#include <bits/stdc++.h>

using namespace std;

int main() {
    int x;
    cin>>x;
    int ans=0;
    for(int i=0; i<32; i++){
        for(int j=0; j<i; j++){
            if((1<<i)+(1<<j)<=x){
                ans++;
            }else{
                cout<<ans;
                return 0;
            }
        }
    }


    return 0;
}