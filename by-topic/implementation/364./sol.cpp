// AiaSoft #364 — ინიციალები
// Complexity: O(1)
// Topics: Strings, Implementation

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    
    string name, last_name;
    cin>>name>>last_name;
    string initial1="", initial2="";
    initial1=initial1+name[0]+".";
    initial2=initial2+last_name[0]+".";
    cout<<initial1<<" "<<initial2;


    return 0;
}