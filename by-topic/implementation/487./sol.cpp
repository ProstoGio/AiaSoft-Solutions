// AiaSoft #487 — მკაცრად მონოტონურობა
// Complexity: O(n)
// Topics: Implementation, Sequences

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    if(a.size()==1){
        cout<<"YES";
    }else{
        if(a[0]>a[1]){
            for(int i=0; i<n-1; i++){
                if(a[i]<=a[i+1]){
                    cout<<"NO";
                    return 0;
                }
            }
            cout<<"YES";
        }else if(a[0]<a[1]){
            for(int i=0; i<n-1; i++){
                if(a[i]>=a[i+1]){
                    cout<<"NO";
                    return 0;
                }
            }
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }
    
    cout<<"\n";
    
    return 0;
}