#include <bits/stdc++.h>
using namespace std;

int main(){
    int len;
    cin>>len;
    vector<long long> dp(len+1);
    dp[0]=0;
    if(len>=1)dp[1]=2;
    if(len>=2)dp[2]=4;
    if(len>=3)dp[3]=7;
    for(int i=4; i<=len; i++){
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }
    cout<<dp[len];
    cout<<"\n";
    
    
    return 0;
}
