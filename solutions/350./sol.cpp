// AiaSoft #350 — იძებნება თუ არა?
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, x;
    cin>>n>>x;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    sort(a, a+n);
    string ans="NO";
    int l=0, r=n-1;

    while(l<r){
        int m=(l+r)/2;
        if(a[m]<x)l=m+1;
            else r=m;
    }
    
    if(a[r]==x)ans="YES";
    
    cout<<ans;
    
    
    
    return 0;
}