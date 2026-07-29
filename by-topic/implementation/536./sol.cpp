// AiaSoft #536 — გამქრალი სიმბოლო
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin>>s;
    char c=97;
    sort(s.begin(), s.end());
    string s2="";
    s2+=s[0];
    char temp=s[0];
    for(int i=0; i<s.size(); i++){
        if(s[i]!=temp){
            s2+=s[i];
            temp=s[i];
        }
    }
    s=s2;
    int i=0;
    vector<char> ans;
    while(c<=122){
        if(s[i]!=c){
            ans.push_back(c);
            c++;
        }else{
            c++;
            i++;
        }
    }
    
    if(ans.size()==0){
        cout<<"Complete\n";
    }else{
        for(auto j : ans){
            cout<<j<<" ";
        }
    }


    return 0;
}