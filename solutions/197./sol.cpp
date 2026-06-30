// AiaSoft #197 — სიტყვების დათვლა
// Complexity: O(n)
// Topics: Strings, Implementation

#include <bits/stdc++.h>
using namespace std;


int main() {
    
    string s;
    getline(cin, s);
    s=" "+s;
    int cnt=0;
    
    for(int i=1; i<s.size(); i++){
        if(s[i]!=' ' && s[i-1]==' ')cnt++;
    }
    
    cout<<cnt;


    return 0;
}