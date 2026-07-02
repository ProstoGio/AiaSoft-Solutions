// AiaSoft #860 — მასივის კენტები
// Complexity: O(n)
// Topics: Implementation, Math

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    int raodenoba=0, jami=0, t=0;
    for(int i=0; i<n; i++){
        if(a[i]%2!=0){
            raodenoba++;
            jami+=a[i];
            t++;
        }
    }
    
    if(t>0){
        cout<<raodenoba<<" "<<jami;
        return 0;
    }
    
    cout<<-1;


    return 0;
}