// AiaSoft #176 — კიბე
// Complexity: O(n)
// Topics: Dynamic Programming, Math, Sequences

#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> dp(50);
int main(){
    cin>>n;
    dp[0]=1;
    dp[1]=2;
    for(int i=2; i<n; i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n-1]<<"\n";
    


    return 0;
}