// AiaSoft #570 — უახლოესი რიცხვი
// Complexity: O(Q log N)
// Topics: Binary Search, Sequences

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, q;
    cin>>n>>q;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    for(int i=0; i<q; i++){
       int x;
       cin>>x;
       
       int l=0, r=n-1;
       while(r-l>1){
           int m=(l+r)/2;
           if(x>a[m])l=m;
           if(x<a[m])r=m;
           if(x==a[m]){
               l=m;
               break;
           }
       }
       int z=abs(x-a[l]);
       int y=abs(x-a[r]);
       if(z>y){
           cout<<a[r]<<" ";
       }else{
           cout<<a[l]<<" ";
       }
      
    }
    

    return 0;
}