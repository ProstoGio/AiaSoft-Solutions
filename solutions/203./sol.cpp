// AiaSoft #203 — ბაბის უყვარს კომბოსტო
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;
long long n;
vector<long long> v(150);
vector<long long> dp(150);
int main(){
    cin>>n;
    for(int i=1; i<=n; i++){cin>>v[i];}
    if(n<=2){
        long long ans=0;
        for(int i=1; i<=n; i++){
            ans+=v[i];
        }
        cout<<ans<<"\n";
        return 0;
    }
    
    dp[0]=0;
    dp[1]=v[1];
    dp[2]=v[1]+v[2];
    for(int i=3; i<=n; i++){
        dp[i]=max({dp[i-1], dp[i-2]+v[i], dp[i-3]+v[i-1]+v[i]});
    }
    
    // for(int i=1; i<=n; i++){
    //     cout<<dp[i]<<" ";
    // }cout<<"\n";
    cout<<dp[n]<<"\n";
    
    return 0;
}