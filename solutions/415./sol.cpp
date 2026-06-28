// AiaSoft #415 — რა დღეა?
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int k, h, n;
    cin>>k>>h>>n;
    int y=h+n;
    k=k+y/24;
    k=k%7;
    if(k==0)k=7;
    cout<<k;


    return 0;
}