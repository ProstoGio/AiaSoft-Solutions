// AiaSoft #616 — ბიტებით თამაში
// Complexity: O(Q)
// Topics: Bit Manipulation, Implementation

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    while(n--){
        long long x, k, t;
        cin>>x>>k>>t;
        if(t==1){
            cout<<(x|(1LL<<k))<<"\n";
        }else if(t==2){
            cout<<(x&(~(1LL<<k)))<<"\n";
        }else if(t==3){
            cout<<(x^(1LL<<k))<<"\n";
        }
    }


    return 0;
}