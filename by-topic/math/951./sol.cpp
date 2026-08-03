// AiaSoft #951 — რიგები
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n, m;
    cin>>n>>m;
    if(n%m!=0){
        cout<<(n/m)+1;
    }else{
        cout<<n/m;
    }


    return 0;
}