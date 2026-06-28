// AiaSoft #691 — უცნაური დალაგება 
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
    
    sort(a, a+n);
   
   
    int l=0, r=n-1;
    while(l<=r){
        if(l!=r)cout<<a[l]<<" "<<a[r]<<" ";
            else cout<<a[l];
        l++; r--;
    }
   
    


    return 0;
}