// AiaSoft #373 — გამოტოვებული რიცხვი
// Complexity: O(n)
// Topics: Implementation, Sequences

#include <bits/stdc++.h>

using namespace std;

int b[1000000];
int main() {
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    for(int k=0; k<n; k++){
        b[a[k]]++;
    }
    
    for(int i=0; i<=n; i++){
        if(b[i]==0){
            cout<<i;
            return 0;
        }
    }
    


    return 0;
}