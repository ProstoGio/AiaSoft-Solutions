// AiaSoft #856 — მოლაშქრე კენგურუ
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, mx=-1, idx;
    cin>>n;
    vector<int> a(n);
    vector<int> d(n, -1);
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]>mx){
            mx=a[i];
            idx=i;
        }
    }
    int prev=0;
    d[0]=1;
    for(int i=1; i<n; i++){
        if(a[i]>a[prev]){
            d[i]=d[prev]+1;
            prev=i;
        }
        
        
    }
    
    cout<<d[idx];
    cout<<"\n";
    
    
    
    return 0;
}