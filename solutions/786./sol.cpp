// AiaSoft #786 — მარტივი რიცხვები N-მდე
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int a[n];
    int x=2, ind=0;
    while(x<=n){
        int p=1, k=1;
        while(p*p<=x){
            if(x%p==0)k++;
            
            p++;
                //cout<<x<<" "<<p<<" "<<k<<endl;
        }
        
        //cout<<"x_"<<x<<" "<<"k_"<<k<<endl;
        if(k==2)cout<<x<<" ";
        
        ind++;
        x++;
        
    }       
    
    // for(int i=0; i<ind; i++){
    //     cout<<a[i]<<" ";
    // }


    return 0;
}