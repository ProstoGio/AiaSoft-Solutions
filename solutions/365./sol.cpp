// AiaSoft #365 — გაასწორეთ წინადადება
// Complexity: O(n)
// Topics: Strings, Implementation

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    string s, ans="";
    getline(cin, s);
    for(int i=0; i<s.size(); i++){
        if(s[i]!=' ')ans+=s[i];
            else if(s[i-1]!=' ')ans+=" ";
        
        
        
    }
    
    cout<<ans;
    


    return 0;
}