// AiaSoft #692 — ორადი მეზობლები
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main (){    
    
    int n; 
    cin>>n; 
    for(int i=1; i<=n; i++){ 
        long long a; cin>>a; 
        if(a==2)cout<<1<<' '<<4<<endl; 
        else{ 
            long long t=1; 
            while(t<a)t=t*2;
            
            if(t/2<=a)t=t/2; 
            
            cout<<t<<' '; 
            
            if(t*2!=a)cout<<t*2<<endl; 
                else cout<<t*4<<endl; 
        
        } 
    
    } 

    return 0; 

}