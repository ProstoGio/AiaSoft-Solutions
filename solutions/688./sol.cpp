// AiaSoft #688 — მაქსიმალური პალინდრომი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;
string s; 
int answer=1;
int dp[10001][10001];
int main(){
    cin>>s;
    for(int i=0; i<s.size(); i++)dp[i][i]=1;
    
    for(int len=2; len<=s.size(); len++){
        for(int l=0; l<s.size(); l++){
            int r=len+l-1;
            if(r>=s.size())continue;
            if((dp[l+1][r-1]==1 || r-l==1) && s[l]==s[r]){
                dp[l][r]=1;
                answer=max(len,answer);
            }
           
        }
        
    }
    cout<<answer<<"\n";
    


    return 0;
}