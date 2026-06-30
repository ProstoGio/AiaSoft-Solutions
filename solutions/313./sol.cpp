// AiaSoft #313 — 0 და 1
// Complexity: O(n)
// Topics: Dynamic Programming, Sequences

#include <bits/stdc++.h>
using namespace std;

int main(){
    int len;
    cin>>len;
    vector<long long> dp(len+1);
    dp[0]=0;
    dp[1]=2;
    dp[2]=3;
    for(int i=3; i<=len; i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[len];
    cout<<"\n";
    
    
    return 0;
}