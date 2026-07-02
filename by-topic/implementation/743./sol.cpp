// AiaSoft #743 — ციფრთა ჯამი - 1
// Complexity: O(n log(max(a, b)))
// Topics: Implementation, Math

#include <bits/stdc++.h>
using namespace std;

int calc(int x){
    int k=0;
    while(x>0){
        k+=x%10;
        x=x/10;
    }
    return k;
}

int main() {
    
    int a, b;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        cout<<calc(i)<<" ";
        
    }
    
    

    return 0;
}