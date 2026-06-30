// AiaSoft #059 — კბილის ექიმი
// Complexity: O(n²)
// Topics: Implementation, Sorting, Greedy

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; 
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++){
        int x, y;
        cin>>x>>y;
        a[i]=x; b[i]=y;
    }
    
    for(int i=0; i<n; i++){
       for(int j=0; j<n-i-1; j++){
          if(a[j]>a[j+1]){
              swap(a[j], a[j+1]);
              swap(b[j], b[j+1]);
          }
       }
    }
    
    int exitT=a[0]+b[0];
    for(int i=1; i<n; i++){
        if(exitT>=a[i])exitT+=b[i];
            else exitT=a[i]+b[i];
    }
    
    int ans=exitT-a[n-1];
    cout<<ans;

    


    return 0;
}