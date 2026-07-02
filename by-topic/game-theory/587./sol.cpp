// AiaSoft #587 — თამაში გადანაცვლებაზე
// Complexity: O(T * n * 2^n)
// Topics: Game Theory, Dynamic Programming, Bit Manipulation

#include <bits/stdc++.h>
#define pb push_back
using namespace std;
int t;

bool check(int mask, vector<int> v){
    vector<int> seq;
    for(int i=0; i<v.size(); i++){
        if((mask&(1<<i))){
            seq.pb(v[i]);
        }
    }
    
    for(int i=0; i<seq.size()-1; i++){
        if(seq[i]>seq[i+1])return false;
    }
    return true;

}

int dp[1<<15];

bool sol(int mask, vector<int> v){
    if(dp[mask]!=-1)return dp[mask];
    
    if(check(mask, v))return dp[mask]=0;
    
    for(int i=0; i<v.size(); i++){
        if((mask&(1<<i))!=0){
            int next_mask=mask&(~(1<<i));
            if(!sol(next_mask, v))return dp[mask]=1;
        }
    }
    
    return dp[mask]=0;
}

int main(){
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        for(int i=0; i<(1<<n); i++)dp[i]=-1;
        int mask=(1<<n)-1;
        
        if(sol(mask, a))cout<<"Tom\n";
            else cout<<"Jerry\n";
    }
    
    
    return 0;
}