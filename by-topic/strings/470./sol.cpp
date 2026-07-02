// AiaSoft #470 — 0-ები და 1-ები
// Complexity: O(n)
// Topics: Implementation, Strings

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; cin>>s;
    int cnt=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1')cnt++;
    }
    cout<<cnt;
    cout<<"\n";


    return 0;
}