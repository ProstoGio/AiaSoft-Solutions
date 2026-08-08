// AiaSoft #641 — მიმდევრობის წევრი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin>>n>>q;
    vector<long long> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    long long g=a[0];
    for(int i=1; i<n; i++){
        g=gcd(g, abs(a[i]));
    }
    vector<int> ans;
    vector<long long> x(q);
    for(int i=0; i<q; i++){
        cin>>x[i];
        if(g==0){
            if(x[i]==0){
                ans.push_back(1);
            }else{
                ans.push_back(0);
            }
        }else{
            if(x[i]%g==0)ans.push_back(1);
                else ans.push_back(0);
        }
        
    }
    
    for(auto i : ans){
        if(i)cout<<"YES\n";
            else cout<<"NO\n";
    }
    
    
    
    
    
    
    
    return 0;
}