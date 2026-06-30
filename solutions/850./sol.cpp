// AiaSoft #850 — მინიმალური კენტი
// Complexity: O(n)
// Topics: Implementation, Greedy

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    int kentmn=0, k;
    
    for(int i=0; i<n; i++){
        if(a[i]%2!=0){
            kentmn=a[i];
            k=i;
            for(int i=k; i<n; i++){
                if(a[i]%2!=0 && a[i]<kentmn){
                    kentmn=a[i];
                }
            }
            cout<<kentmn;
            
            return 0;
        }
    }
    
    
    cout<<-1;


    return 0;
}