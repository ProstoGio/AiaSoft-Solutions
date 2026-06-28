// AiaSoft #300 — ფასიანი კიბე
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> dp(1000);
vector<int> a(1000);
int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    dp[0]=a[0];
    dp[1]=a[1];
    for(int i=2; i<n; i++){
        dp[i]=min(dp[i-1], dp[i-2])+a[i];
    }
    cout<<dp[n-1]<<"\n";
    


    return 0;
}