// AiaSoft #332 — გამყოფები 1
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, p, k=1;
    cin>>n;
    p=1;
    while(p<=n/2){
        if(n%p==0)k++;
        p++;
    }
    cout<<k;



    return 0;
}