// AiaSoft #148 — განსხვავებული რიცხვების რაოდენობა 2
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    set <int> s;
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    
    cout<<s.size();


    return 0;
}