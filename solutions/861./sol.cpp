// AiaSoft #861 — წაშალეთ სიმბოლო
// Complexity: O(n²)
// Topics: Implementation, Strings

#include <bits/stdc++.h>
using namespace std;

int main (){
    
    string s, k;
    cin>>s>>k;
    for(int i=0; i<s.size(); i++){
        if(s[i]==k[0]){
            s.erase(i, 1);
            i--;
        }
    }
    
    cout<<s;
    
    
    return 0;
}