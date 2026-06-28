// AiaSoft #033 — მასივის მაქსიმალური ელემენტი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    int mx=a[0];
    for(int i=1; i<n; i++){
        if(a[i]>mx)mx=a[i];
    }
    
    cout<<mx;
    

    return 0;
}