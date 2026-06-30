// AiaSoft #458 — პასკალის სამკუთხედი
// Complexity: O(n²)
// Topics: Math, Implementation, Dynamic Programming

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    n=n+1;
    int d[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            d[i][j]=0; 
        }
    }
    
    for(int i=0; i<n; i++){
        d[i][i]=1;
        d[i][1]=1;
    }
    
    for(int i=2; i<n; i++){
         for(int j=2; j<n; j++){
            if(d[i][j]==1)break;
                else d[i][j]=d[i-1][j]+d[i-1][j-1];
         }
    }
    
    int k=2;
    for(int i=1; i<n; i++){
        for(int j=1; j<k; j++){
            cout<<d[i][j]<<" "; 
            
        }
        cout<<endl;
        k++;
    }
    
    return 0;
}