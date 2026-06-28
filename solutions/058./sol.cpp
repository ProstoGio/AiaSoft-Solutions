// AiaSoft #058 — ფხაჭუნა კატები
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, m, a, fine=0;
    cin>>n>>m>>a;
    int b[n*m];
    for(int i=0; i<n*m; i++){
        cin>>b[i];
    }
    for(int i=0; i<n*m-m; i++){
        if(b[i+m]>b[i]*2)fine+=a;
    }
    cout<<fine;
    


    return 0;
}