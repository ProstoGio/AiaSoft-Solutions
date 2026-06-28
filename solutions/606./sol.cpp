// AiaSoft #606 — დათვალე ერთები
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n; cin>>n;
    int d[n];
    for(int i=0; i<n; i++){
        int x; cin>>x;
        d[i]=__builtin_popcount(x);
    }
    
    for(int i=0; i<n; i++){
       cout<<d[i];
       if(i!=n-1)cout<<endl;
    }
   


    return 0;
}