// AiaSoft #043 — მასივის ქვესეგმენტის შეტრიალება
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    int l, r;
    cin>>l>>r;
    while(l<r){
        int t=a[l];
        a[l]=a[r];
        a[r]=t;
        l++;
        r--;
    }
    for(int i=0; i<n; i++) {
        cout<<a[i]<<" ";
        
    }

    return 0;
}