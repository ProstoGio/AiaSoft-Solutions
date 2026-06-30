// AiaSoft #873 — E = mc²
// Complexity: O(1)
// Topics: Math, Implementation

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    unsigned long long mass;
    cin>>mass;
    int c=9;
    unsigned long long Energy;
    Energy=mass*c;
    string e2=to_string(Energy)+"0000000000";
   
    cout<<e2;
    
    


    return 0;
}