// AiaSoft #870 — კარგი სამეული - 2
// Complexity: O(1)
// Topics: Implementation, Math

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int a, b, c;
    cin>>a>>b>>c;
    if(a==b)cout<<c;
        else if(a==c)cout<<b;
                else if(b==c)cout<<a;
    


    return 0;
}