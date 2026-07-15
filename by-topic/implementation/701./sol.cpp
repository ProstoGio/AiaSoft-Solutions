// AiaSoft #701 — მასივში ციფრთა ჯამი
// Complexity: O(n * log(max_element))
// Topics: Implementation, Math

#include <bits/stdc++.h>
using namespace std;

int calc(int x){
    int k=0;
    while(x>0){
        k+=x%10;
        x=x/10;
    }
    return k;
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    
    vector<int> ans;
    for(int i=0; i<n; i++){
        ans.push_back(calc(a[i]));
    }
    
    for(auto i : ans){
        cout<<i<<" ";
    }
    
    
    cout<<"\n";
    return 0;
}