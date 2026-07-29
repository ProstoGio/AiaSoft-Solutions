// AiaSoft #440 — მასივი 1
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
    
    int l=0, r=n-1;
    while(l<=r){
        swap(a[l], a[r]);
        l++; r--;
    }
    for(int i=0; i<n; i++){
        if(i%2!=0)cout<<a[i]<<" ";
    }

    cout<<"\n";
    return 0;
}