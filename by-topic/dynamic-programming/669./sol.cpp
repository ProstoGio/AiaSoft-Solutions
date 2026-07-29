// AiaSoft #669 — სანდრო და კამათელი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;
vector<long long> dp(1000001);
long long n;

int main(){
    dp[0]=1;
    cin>>n;
    for(int i=0; i<n; i++){
        if(i+1<=n)dp[i+1]=(dp[i+1]+dp[i])%1000000007;
        if(i+2<=n)dp[i+2]=(dp[i+2]+dp[i])%1000000007;
        if(i+3<=n)dp[i+3]=(dp[i+3]+dp[i])%1000000007;
        if(i+4<=n)dp[i+4]=(dp[i+4]+dp[i])%1000000007;
        if(i+5<=n)dp[i+5]=(dp[i+5]+dp[i])%1000000007;
        if(i+6<=n)dp[i+6]=(dp[i+6]+dp[i])%1000000007;
    }
    // for(int i=0; i<=n; i++){
    //     cout<<dp[i]<<" ";
    // }cout<<"\n";
    
    cout<<dp[n];
    

    cout<<"\n";
    return 0;
}
