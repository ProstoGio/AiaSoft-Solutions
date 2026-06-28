// AiaSoft #928 — მიმდევრობები
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;
long long k, m, n;
long long dp[100][100];
int main(){
    cin>>k>>m>>n;
    for(long long i=1; i<m; i++){
        dp[1][i]=1;
    }
    for(long long i=2; i<=n; i++){
        for(long long j=1; j<m; j++){
            if(j-k>=1 && j+k<m){
                dp[i][j]=dp[i-1][j-k]+dp[i-1][j+k];    
            }else if(j-k>=1){
                dp[i][j]=dp[i-1][j-k];
            }else if(j+k<m){
                dp[i][j]=dp[i-1][j+k];
            }
        }
    }
    long long answer=0;
    for(long long i=1; i<m; i++){
        answer+=dp[n][i];
    }
    cout<<answer<<"\n";
    
    
    
    return 0;
}