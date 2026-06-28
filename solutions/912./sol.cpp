// AiaSoft #912 — საახალწლო ნათურები
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    string s="2025";
    int n, k;
    cin>>n>>k;
    if(k%4==0)cout<<"5";
        else cout<<s[k%4-1];


    return 0;
}