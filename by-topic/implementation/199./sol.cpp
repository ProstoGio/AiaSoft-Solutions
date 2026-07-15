// AiaSoft #199 — სეგმენტის შემობრუნება
// Complexity: O(n)
// Topics: Strings, Implementation

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int l, r;
    cin>>s;
    cin>>l>>r;
    l--; r--;
    while(l<=r){
        swap(s[l], s[r]);
        l++;
        r--;
    }
    
    cout<<s;
    
    
    cout<<"\n";
    return 0;
}