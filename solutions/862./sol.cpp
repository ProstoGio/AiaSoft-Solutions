// AiaSoft #862 — ნახევარმატრიცა
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, x;
    cin>>n>>x;
    int a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            a[i][j]=0;
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            a[i][j]=x;
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
   


    return 0;
}