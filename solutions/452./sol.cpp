// AiaSoft #452 — კვადრების ქვეყანა
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> dp(60001, 100000);
int main(){
    for(int i=1; i<=244; i++)dp[i*i]=1;
    cin>>n;
    
    for(int i=2; i<=n; i++){
        for(int j=1; j*j<=n; j++){
            if(i>=j*j)dp[i]=min(dp[i], dp[j*j]+dp[i-j*j]);
                else break;
        }
    }
    
    cout<<dp[n]<<"\n";
    


    return 0;
}