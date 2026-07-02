// AiaSoft #849 — სად არის მინიმუმი?
// Complexity: O(n)
// Topics: Implementation, Sequences

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int a[n];
    
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    
    int mn=a[0], id=0;
    for(int i=1; i<n; i++){
        if(a[i]<mn){
            mn=a[i];
            id=i;
        }
    }
    
    cout<<mn<<" "<<id;


    return 0;
}