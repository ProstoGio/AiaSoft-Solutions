// AiaSoft #611 — XOR ოპერაცია
// Complexity: O(n²)
// Topics: Math, Dynamic Programming

#include <bits/stdc++.h>
using namespace std;
int dp[100][100];

int main(){
    int n;
    cin>>n;
    for(int i=0; i<=n; i++){
        dp[i][0]=1;
    }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            dp[i][j]=dp[i-1][j]+dp[i-1][j-1];
        }
    }
    int answer=0;
    for(int i=1; i<=n; i++){
        if(i%2==0)continue;
        answer+=dp[n][i];
    }
    
    cout<<answer;
    cout<<"\n";
    
    
    return 0;
}