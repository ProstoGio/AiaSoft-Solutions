// AiaSoft #329 — კენტი რიცხვები 2
// Complexity: O(n)
// Topics: Implementation, Math

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, i;
    cin>>n;
    i=n;
    while(i>0){
        if(i%2!=0)cout<<i<<" ";
        i--;
    }
    
    
    return 0;
}