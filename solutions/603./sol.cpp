// AiaSoft #603 — მონეტების ჯამი
// Complexity: O(n * Σx)
// Topics: Dynamic Programming

#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+500;
int dp[100][maxn+500];
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    dp[0][a[0]]=1;
    for(int i=1; i<n; i++){
        dp[i][a[i]]=1;
        for(int j=0; j<maxn; j++){
            if(dp[i-1][j]==1)dp[i][j]=1;
            if(j-a[i]>=0 && dp[i-1][j-a[i]]==1){
                dp[i][j]=1;
            }
        }
    }
    vector<int> ans;
    for(int i=0; i<maxn; i++){
        if(dp[n-1][i]==1)ans.push_back(i);
    }
    cout<<ans.size()<<"\n";
    for(auto x : ans){
        cout<<x<<" ";
    }cout<<"\n";
    
    return 0;
}