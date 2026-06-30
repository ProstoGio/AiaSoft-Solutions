// AiaSoft #207 — ლებრონი და კალათბურთი
// Complexity: O(1)
// Topics: Math, Implementation

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int a, b, c;
    int x, y, z;
    cin>>a>>b>>c;
    cin>>x>>y>>z;
    
    if(a+b*2+c*3>x+y*2+z*3){
        cout<<"YES";
    }else{
        cout<<"NO";
    }


    return 0;
}