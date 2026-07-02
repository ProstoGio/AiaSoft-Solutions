// AiaSoft #035 — ორი რიცხვის უდიდესი საერთო გამყოფი
// Complexity: O(log(min(a, b)))
// Topics: Math, Number Theory, Recursion

#include <bits/stdc++.h>
#define ll unsigned long long
using namespace std;

ll GDC(ll a, ll b){
   
   if(b==0)return a;
   return GDC(b, a%b);
   
}

int main() {

    ll x, y;
    cin>>x>>y;
    cout<<GDC(x, y);
    


    return 0;
}