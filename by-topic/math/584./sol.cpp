// AiaSoft #584 — ვაშლები (მარტივი)
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    if(n==1){
        cout<<0;
        return 0;
    }
    
    if(n%2==0){
        cout<<n/2;
        return 0;
    }else if(n%3==0){
        cout<<n/3;
        return 0;
    }else if(n%5==0){
        cout<<n/5;
        return 0;
    }else if(n%7==0){
        cout<<n/7;
        return 0;
    }else {
        cout<<1;
    }
    
    
    
    cout<<"\n";
    return 0;
}