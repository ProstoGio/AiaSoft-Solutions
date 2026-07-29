// AiaSoft #772 — სიმბოლოთა სიხშირე
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

vector<int> freq(150, 0);

int main() {
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        freq[s[i]]++;
    }
    
    for(int i=97; i<=122; i++){
        cout<<freq[i]<<" ";
    }
    
    
    cout<<"\n";
    return 0;
}