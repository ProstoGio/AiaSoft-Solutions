// AiaSoft #502 — პიცა
// Complexity: O(log(min(n, m)))
// Topics: Math, Number Theory

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    long long n, m;
    cin>>n>>m;
    n++; m++;
    if(n%m==0)cout<<n;
       else if(m%n==0)cout<<m;
                else cout<<lcm(n, m);
    


    return 0;
}