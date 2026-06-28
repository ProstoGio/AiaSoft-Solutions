// AiaSoft #827 — პალინდრომია?
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

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