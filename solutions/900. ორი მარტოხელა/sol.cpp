#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        
        if(n==1){
            cout<<a[0]<<"\n";
            continue;
        }
        
        sort(a.begin(), a.end());
        vector<long long> ans;
        int cnt=0;
        for(int i=0; i<n; i++){
            if(i>0 && i<n-1){
                if(a[i]!=a[i-1] && a[i]!=a[i+1])ans.push_back(a[i]);
            }else if(i==0){
                if(a[i]!=a[i+1])ans.push_back(a[i]);
            }else if(i==n-1){
                if(a[i]!=a[i-1])ans.push_back(a[i]);
            }
        }
        
        
        
        for(auto x : ans){
            cout<<x<<" ";
        }
        
        a.clear();
        ans.clear();
        a.resize(n);
        cout<<"\n";
        
    }
    
    
    return 0;
}
