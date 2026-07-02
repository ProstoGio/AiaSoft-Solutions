// AiaSoft #366 — რამდენი ნულია?
// Complexity: O(log n)
// Topics: Implementation, Recursion, Math

#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll calc(ll n){
    if(n==0)return 1;
    if(n<10){
        return 0;
    }else{
        if(n%10==0){
            ll cnt=1;
            return cnt+calc(n/10);
        }else{
            return calc(n/10);
        }
    }
}

int main() {
    
    ll n;
    cin>>n;
    cout<<calc(n);


    return 0;
}