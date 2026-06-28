// AiaSoft #623 — სტრიქონები წიგნში
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int k, n, a, b;
    cin>>k>>n;
    if(n%k==0){
        a=n/k;
        b=k;
    }
    else{
        a=n/k+1;
        b=n%k;
    }
    cout<<a<<" "<<b;


    return 0;
}