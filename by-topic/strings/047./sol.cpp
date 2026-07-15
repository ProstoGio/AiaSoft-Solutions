// AiaSoft #047 — ლამაზი წინადადება
// Complexity: O(n)
// Topics: Implementation, Strings

#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    for(int i=0; i<s.size(); i++){
        if(i==0 && s[i]>=97)s[i]-=32;
            else if(s[i-1]==' ' && s[i]>=97)s[i]-=32; 
                    else if(s[i-1]!=' ' && s[i]!=' ' && s[i]<97)s[i]+=32;
    }
    
    cout<<s;
    cout<<"\n";
    
    return 0;
}