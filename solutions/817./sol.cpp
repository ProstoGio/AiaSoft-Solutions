// AiaSoft #817 — მეგობრული წევრები
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, counter=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i]==a[i+2] && a[i]==a[i+1])counter=counter+1;
    }
    if(counter==0)cout<<-1;
     else cout<<counter;

    return 0;
}