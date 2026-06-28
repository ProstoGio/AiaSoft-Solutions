// AiaSoft #227 — შუათანა ძმა
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int a, b, c;
    cin>>a>>b>>c;
    int d;
    if(a>b && a<c || a<b && a>c)d=a;
        else if(b>a && b<c || b<a && b>c)d=b;
            else if(c>b && c<a || c<b && c>a)d=c;
    
    cout<<d;


    return 0;
}