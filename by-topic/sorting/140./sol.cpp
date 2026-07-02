// AiaSoft #140 — მეორე ნომერი ცელქობა
// Complexity: O(n log n)
// Topics: Sorting, Implementation

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int> a(n+1);
    for(int i=1; i<=n; i++)cin>>a[i];
    sort(a.begin(), a.end());
    for(int i=1; i<=n; i++)cout<<a[i]<<" ";
    cout<<"\n";
    
    
    return 0;
}