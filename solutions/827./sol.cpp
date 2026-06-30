// AiaSoft #827 — პალინდრომია?
// Complexity: O(n)
// Topics: Strings, Implementation

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    
    string word;
    getline(cin, word);
    string word2=word;
    reverse(word.begin(), word.end());
    if(word==word2)cout<<"yes";
        else cout<<"no";

    return 0;
}