// AiaSoft #365 — გაასწორეთ წინადადება
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

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