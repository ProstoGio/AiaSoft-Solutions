// AiaSoft #035 — ორი რიცხვის უდიდესი საერთო გამყოფი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

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