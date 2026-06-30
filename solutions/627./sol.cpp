// AiaSoft #627 — ნიკოს მიმდევრობა - 1
// Complexity: O(k)
// Topics: Implementation, Sequences

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int k, p=1;
    cin>>k;
    for(int i=1; i<=k; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
            if(p>=k)return 0;
            p++;
        }    
    }
    


    return 0;
}