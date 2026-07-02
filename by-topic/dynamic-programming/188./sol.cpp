// AiaSoft #188 — ჩქარა, ბაბი, ჩქარა!
// Complexity: O(n)
// Topics: Dynamic Programming, Math

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n, m;
    cin>>n>>m;
    vector<int> a(n);
    vector<int> b(n);
    a[0]=1;
    a[1]=2;
    b[0]=1;
    if(m==1)b[1]=1;
        else b[1]=2;
    
    for(int i=2; i<n; i++){
        a[i]=a[i-1]+a[i-2];
        b[i]=b[i-1]+b[i-2];
        if(i==m){
            b[i]=b[i-1];
        }
        if(i>=m+2){
            a[i]+=b[i-3];
            b[i]+=b[i-3];
        }
    }
    // cout<<"a -> ";    
    // for(int i=0; i<n; i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    
    // cout<<"b -> ";    
    // for(int i=0; i<n; i++){
    //     cout<<b[i]<<" ";
    // }
    // cout<<endl;
    
    cout<<a[n-1];
    
    return 0;
}