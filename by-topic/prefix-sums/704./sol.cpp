// AiaSoft #704 — ინტერვალის ჯამი
// Complexity: O(N + Q)
// Topics: Prefix Sums, Implementation

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, q;
    cin>>n>>q;
    vector<long long> a(n);
    vector<long long> dp(n);
    long long sum=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum+=a[i];
        dp[i]=sum;
    }
    
    while(q--){
        long long l, r;
        cin>>l>>r;
        long long answer;
        if(l>1)answer=dp[r-1]-dp[l-2];
            else answer=dp[r-1];
        cout<<answer;
        cout<<"\n";
        
    }
    

    return 0;
}