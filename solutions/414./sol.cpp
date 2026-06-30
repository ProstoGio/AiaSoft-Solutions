// AiaSoft #414 — უდიდესი რიცხვი
// Complexity: O(1)
// Topics: Math, Implementation

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int a, b, k;
    cin>>a>>b;
    if(a>b)k=a*10+b+1;
     else k=b*10+a+1;
    cout<<k;


    return 0;
}