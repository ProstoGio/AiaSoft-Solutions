// AiaSoft #198 — რეაქტიული ბაბი
// Complexity: O(n)
// Topics: Dynamic Programming, Math

#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> dp(50);
int main(){
    cin>>n;
    dp[0]=0;
    dp[1]=1;
    dp[2]=1;
    for(int i=3; i<n; i++){
        dp[i]=dp[i-2]+dp[i-3];
    }
    cout<<dp[n-1]<<"\n";
    


    return 0;
}