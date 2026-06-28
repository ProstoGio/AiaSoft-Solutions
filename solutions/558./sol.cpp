// AiaSoft #558 — ზრდადი მიმდევრობა
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    
    ll n;
    cin>>n;
    ll s[n];
    for(ll i=0; i<n; i++){
        cin>>s[i];
    }
    
    ll cnt=0;
    for(ll i=1; i<n; i++){
        if(s[i]<s[i-1]){
            cnt+=s[i-1]-s[i];
            s[i]=s[i-1];
        }
    }
    
    // for(int i=0; i<n; i++){
    //     cout<<s[i]<<" ";
    // }
    cout<<cnt;
    


    return 0;
}