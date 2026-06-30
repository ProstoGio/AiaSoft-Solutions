// AiaSoft #253 — დიპლომები
// Complexity: O(log(max(w, h) * n))
// Topics: Binary Search, Math

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    
    ll n, w, h;
    cin>>n>>w>>h;
    ll l=0, r=max(w,h)*n;
    
    while(l<r){
        ll m=l+(r-l)/2;
        ll cnt=(m/h)*(m/w);
        if(cnt<n)l=m+1;
            else r=m;
    }
    cout<<l;


    return 0;
}