// AiaSoft #824 — ნინი და ხინკალი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string s2, s, alphabet="abcdefghijklmnopqrstuvwxyz";
    int errors=0;
    cin>>s;
    sort(s.begin(), s.end());
    s2+=s[0];
    for(int i=1; i<s.size(); i++){
        
        if(s[i]!=s[i-1])s2+=s[i];
    
    }
    // cout<<"Totall:"<<s2.size()<<endl;
    // for(int i=0; i<s2.size(); i++){
    //     cout<<s2[i]<<" ";
    // }
    if(s2.size()<=24){
        cout<<"NO";
        return 0;
    }else{
        cout<<"YES";
    }



    
    
    return 0;
}