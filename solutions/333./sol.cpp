// AiaSoft #333 — გამყოფები 2
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, p, k=0;
    cin>>n;
    p=1;
    while(p<=n){
        if(n%p==0)k=k+p;
        p++;
    }
    cout<<k;



    return 0;
}