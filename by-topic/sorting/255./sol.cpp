// AiaSoft #255 — მასივის დალაგება - 2
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }

    
    cout<<"\n";

    return 0;
}