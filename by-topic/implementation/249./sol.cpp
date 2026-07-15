// AiaSoft #249 — მასივის ელემენტების წანაცვლება - 1
// Complexity: O(n)
// Topics: Implementation, Sequences

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    
    for(int i=0; i<n-1; i++){
        swap(a[i], a[i+1]);
    }
    
    for(int i=0; i<n; i++)cout<<a[i]<<" ";
    
    cout<<"\n";

    return 0;
}