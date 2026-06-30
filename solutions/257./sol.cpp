// AiaSoft #257 — რიცხვის ძიება მასივში - 2
// Complexity: O(M log N)
// Topics: Binary Search, Implementation

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int a[n];
    for(int k=0; k<n; k++){
        cin>>a[k];
    }
    
    int m;
    cin>>m;
    for(int k=0; k<m; k++){
        int x;
        cin>>x;
        
        int ind=0;
        int l=0, r=n-1;
        while(l<=r){
            int m=(l+r)/2;
            if(a[m]>x)r=m-1;
            if(a[m]<x)l=m+1;
            if(a[m]==x){
                ind=1;
                break;
            }
        }
        
        if(ind==1)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
    }


    return 0;
}