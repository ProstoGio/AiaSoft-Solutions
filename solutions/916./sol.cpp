// AiaSoft #916 — კომპილატორის ახალი ვერსია
// Complexity: O(n)
// Topics: Implementation, Strings

#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    
    string s;
    while(getline(cin, s)){
        for(int i=0; i<s.size(); i++){
            if(s[i]=='/' && s[i+1]=='/')break;
            if(s[i]=='-' && s[i+1]=='>'){
                s[i]='.';
                s.erase(s.begin()+i+1, s.begin()+i+2);
            }
        }
        
        cout<<s<<endl;
    }


    return 0;
}