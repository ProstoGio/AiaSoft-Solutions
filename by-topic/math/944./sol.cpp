// AiaSoft #944 — გაეროს შიფრი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin>>s;
    string answer="";
    int sz=s.size();
    int k=s[sz-1]-'0';
    for(int i=0; i<s.size(); i++){
        if(s[i]<65)continue;
        
        int shift=((i+1)*k)%26;
        //cout<<s[i]<<" "<<shift<<" "<<answer<<"\n";
        int new_pos=(s[i]-'A'-shift+26)%26;
        
        answer+=('A'+new_pos);
    }
    
    cout<<answer;


    return 0;
}