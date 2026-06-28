// AiaSoft #755 — 2-ის ახარისხება
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

long long calc(long long n){
    if(n==0) return 1;
    else return 2*calc(n-1);
    
}

int main(){
    long long n;
    cin>>n;
    cout<<calc(n);

    return 0;
}
