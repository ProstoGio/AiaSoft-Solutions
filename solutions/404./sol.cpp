// AiaSoft #404 — აბა, ვინ მოიგებს ??
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, k;
    cin>>n>>k;
    if(n%4==0){
       if(k==1)cout<<"Giviko";
        else cout<<"Niniko";
    }
    else{
        if(k==1)cout<<"Niniko";
        else cout<<"Giviko";
    }


    


    return 0;
}