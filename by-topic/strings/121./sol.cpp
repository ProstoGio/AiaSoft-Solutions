// AiaSoft #121 — ციფრების ჯამი
// Complexity: O(n^2)
// Topics: Strings, Recursion

#include <bits/stdc++.h>
using namespace std;

int calc(string x){
    
    if(x.size()==1)return x[0]-48;
    int a=x[0]-'0';
    x.erase(0, 1);
    return calc(x)+a;
}

int main() {
    
    string s; 
    cin>>s;
    if(s[0]=='-')s.erase(0, 1);
    cout<<calc(s);
    


    return 0;
}