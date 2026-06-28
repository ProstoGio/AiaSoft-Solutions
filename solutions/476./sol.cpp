// AiaSoft #476 — უდიდესი ზრდადი ქვემიმდევრობა - 2
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> a(200);
vector<int> dp(200);
vector<vector<int>> d(200);
int main(){
    cin>>n;
    for(int i=0; i<n; i++)cin>>a[i];
    dp[0]=1;
    d[0].push_back(a[0]);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[j]<a[i]){
                if(dp[i]<dp[j]+1){
                    dp[i]=dp[j]+1;
                    d[i].clear();
                    d[i]=d[j];
                    d[i].push_back(a[i]);
                }
            }
        }
    }
    int mx=0, idx;
    for(int i=0; i<n; i++){
        if(mx<dp[i]){
            mx=dp[i];
            idx=i;
        }
        //cout<<dp[i]<<" ";
    }
    //cout<<"\n"<<"\n";
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<d[i].size(); j++){
    //         cout<<d[i][j]<<" ";
    //     }cout<<"\n";
    // }
    
    
    cout<<mx<<"\n";
    for(int i=0; i<d[idx].size(); i++){
        cout<<d[idx][i]<<" ";
    }cout<<"\n";
    
    
    
    
    return 0;
}