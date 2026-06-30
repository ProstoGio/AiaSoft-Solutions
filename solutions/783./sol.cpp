// AiaSoft #783 — პირველობა რეიტინგში
// Complexity: O(1)
// Topics: Math, Implementation

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, m, d, a, b;
    cin>>n>>m>>d>>a>>b;
    int dima=d*a;
    int alex=d*b;
    n=n+dima;
    m=m+alex;
    if(n==m){
        cout<<"Draw";
    }
    else{
        if(n>m)cout<<"Dima";
    else cout<<"Alex";
    }


    return 0;
}