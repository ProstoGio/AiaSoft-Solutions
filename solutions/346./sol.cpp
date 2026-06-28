// AiaSoft #346 — შეტყობინება
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;
string s;
vector<long long> dp(100);

int main(){
    cin>>s;
    dp[0]=1;
    long long s1=s[0]-48;
    long long s2=s[1]-48;
    if(s1*10+s2>33 || s1==0)dp[1]=dp[0];
        else dp[1]=dp[0]+1;
    
    for(int i=2; i<s.size(); i++){
        long long n1=s[i-1]-48;
        long long n2=s[i]-48;
        long long n=n1*10+n2;
        if(n<=33 && n>=10){
            dp[i]=dp[i-1]+dp[i-2];
        }else{
            dp[i]=dp[i-1];
        }
    }
    
    cout<<dp[s.size()-1];
    cout<<"\n";



    return 0;
}