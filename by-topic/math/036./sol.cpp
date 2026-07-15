// AiaSoft #036 — ასტერიქსი და ობელიქსი
// Complexity: O(log(N * min(a, b)))
// Topics: Binary Search, Math

#include<bits/stdc++.h>
using namespace std;
const long long lim=1e18;

int main(){
    long long n, a, b;
    cin>>n>>a>>b;
    long long l=0, r=lim/2, ans=0;
    while(l<=r){
        long long m=(l+r)/2;
        if((m/a)+(m/b)>=n){
            r=m-1;
            ans=m;
        }else if((m/a)+(m/b)<=n){
            l=m+1;
        }
    }
    
    cout<<ans;
    cout<<"\n";
    
    
    return 0;
}