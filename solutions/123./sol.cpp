// AiaSoft #123 — სტრიქონის შეტრიალება
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string s, s2="";
    getline(cin, s);
    for(int i=s.size()-1; i>=0; i--){
        s2+=s[i];
    }
    cout<<s2;

    return 0;
}