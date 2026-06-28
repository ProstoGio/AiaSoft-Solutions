// AiaSoft #424 — ვინ არის მარტო?
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    int ans=0;
    for(int i=0; i<n; i++){
        ans^=a[i];
    }
    
    cout<<ans;


    return 0;
}