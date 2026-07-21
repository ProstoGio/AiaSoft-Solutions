// AiaSoft #194 — სიმბოლოს გადაჩოჩება
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    char c;
    int n;
    cin>>c;
    cin>>n;
    
    if(c+n>122){
        c='a'+(n-('z'-c)-1)%26;
        cout<<c;
    }else{
        c=c+n;
        cout<<c;
    }
    
    cout<<"\n";

    return 0;
}