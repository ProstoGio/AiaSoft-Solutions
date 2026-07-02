// AiaSoft #737 — ცვლილება რიცხვში
// Complexity: O(n)
// Topics: Implementation, Greedy, Strings

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string A;
    cin>>A;
    for(int i=0; i<A.size(); i++){
        if(A[i]!='9'){
            A[i]='9';
            break;
        }
    }
    
    cout<<A;
  
    return 0;
}