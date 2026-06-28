// AiaSoft #246 — სამი კუ
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c;
    cin>>a>>b>>c;
    if(min({a,b,c})==a){
        cout<<"a";
    }else if(min({a,b,c})==b){
        cout<<"b";
    }else if(min({a,b,c})==c){
        cout<<"c";
    }


    return 0;
}