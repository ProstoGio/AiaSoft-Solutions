// AiaSoft #854 — სრული პალინდრომი
// Complexity: O(n)
// Topics: Strings, Implementation

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    string s;
    cin>>s;
    string s2=s;
    reverse(s2.begin(), s2.end());
    int qnt=0;
    for(int i=0; i<s.size(); i++){
        if(tolower(char(s[i]))==tolower(char(s2[i])))qnt++;
    }
    
    if(qnt==s.size())cout<<"True";
        else cout<<"False";
    

    return 0;
}