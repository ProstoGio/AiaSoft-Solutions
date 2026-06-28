// AiaSoft #414 — უდიდესი რიცხვი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

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