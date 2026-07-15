// AiaSoft #889 — πთაგორას სამკუთხედი
// Complexity: O(1)
// Topics: Math, Implementation, Geometry

#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int main() {
    ull a, b;
    cin>>a>>b;
    ull k=max(a, b), j=min(a, b);

    ull diff=k*k-j*j;
    ull p=(ull)sqrtl((long double)diff);
    for(ull cand=(p > 2 ? p-2 : 0); cand<=p+2; cand++){
        if(cand*cand==diff){
            cout<<cand<<"\n";
            return 0;
        }
    }

    
    ull sum=k*k+j*j;
    ull q=(ull)sqrtl((long double)sum);
    for(ull cand=(q>2 ? q-2 : 0); cand<=q+2; cand++){
        if(cand*cand==sum){
            cout<<cand<<"\n";
            return 0;
        }
    }

    return 0;
}