// AiaSoft #318 — კეთილი ფერია
// Complexity: O(1)
// Topics: Implementation, Math

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, a, b, c, d, e, k;
    cin>>n;
    for(int i=99999; i>=10000; i--){
        a=i/10000;
        b=i/1000 %10;
        c=i/100 %10;
        d=i/10 %10;
        e=i%10;
        k=a+b+c+d+e;
        if(k==n){
            cout<<i;
            return 0;
        }
    }


    return 0;
}