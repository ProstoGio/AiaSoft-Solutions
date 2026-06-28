// AiaSoft #323 — სიმბოლოს რიგითი ნომერი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    string alphabet="abcdefghijklmnopqrstuvwxyz";
    char s;
    cin>>s;
    for(int i=0; i<alphabet.size(); i++){
        if(alphabet[i] == s){
            cout<<i+1;
            return 0;
        }
    }


    return 0;
}