// AiaSoft #380 — მთელი წერტილები
// Complexity: O(log(min(|x1-x2|, |y1-y2|)))
// Topics: Math, Number Theory, Geometry

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    int a=abs(x2-x1);
    int b=abs(y2-y1);
    int ans=__gcd(a, b)-1;
    // cout<<a<<" "<<b<<endl;
    cout<<ans;
    
    return 0;
}