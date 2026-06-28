// AiaSoft #754 — ფაქტორიალი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

long long calc(long long x){
    if(x==0) return 1;
    else return x*calc(x-1);
    
}

int main(){
    long long n;
    cin>>n;
    cout<<calc(n);

    return 0;
}
