// AiaSoft #122 — სტრიქონი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int calc(string x){
    
    if(x.size()==0)return 0;
    int ans=0;
    if(isdigit(x[0]))ans=1;
    x.erase(0, 1);
    
    return calc(x)+ans;
}

int main() {
    
    string s;
    cin>>s;
    cout<<calc(s);


    return 0;
}