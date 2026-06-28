// AiaSoft #349 — იპოვე მინიმალური
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
    
    int mn=a[0];
    for(int i=1; i<n; i++){
        if(a[i]<mn)mn=a[i];
    }
    
    cout<<mn;
    

    return 0;
}