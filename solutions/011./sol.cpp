// AiaSoft #011 — საყვარელი რიცხვები
// Complexity: O(n)
// Topics: Implementation, Greedy

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int Greatest[n];
    Greatest[0]=9;
    for(int i=1; i<n; i++){
        if(Greatest[i-1]==9){
            Greatest[i]=8;
        }else{
            Greatest[i]=9;
        }
    }   
    for(int i=0; i<n; i++){
        cout<<Greatest[i];
    }
    
    
    return 0;
}