// AiaSoft #048 — პირველკლასელი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin>>s;
    int a=s[0]-48;
    int b=s[2]-48;
    if(s[1]=='+'){
        cout<<a+b;
    }else if(s[1]=='-'){
        cout<<a-b;
    }
    

    return 0;
}