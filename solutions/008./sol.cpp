// AiaSoft #008 — ბავშვები და სტრიქონები
// Complexity: O(n)
// Topics: Strings, Implementation

#include <bits/stdc++.h>
using namespace std;

int b[30], b1[30];
int main() {
    
    string s;
    cin>>s;
    string t;
    cin>>t;
    
    for(int i=0; i<s.size(); i++){
        int x=s[i]-'a'+1;
        b[x]++;
    }
    
    for(int i=0; i<t.size(); i++){
        int x=t[i]-'a'+1;
        b1[x]++;
    }
    
    int ind=0;
    for(int i=1; i<=26; i++){
        if(b[i]!=b1[i]){
            ind=1;
        }
    }
    
    if(ind==0)cout<<"YES";
        else cout<<"NO";


    return 0;
}