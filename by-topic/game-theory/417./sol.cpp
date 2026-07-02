// AiaSoft #417 — ორი ბაჭია
// Complexity: O(1)
// Topics: Game Theory, Math

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, k;
    cin>>n>>k;
    if(k==(n-2) || k>=n){
        cout<<"Babi";
    }else{
        if((n-2)%(k+1)==0)cout<<"Bubi";
            else cout<<"Babi";
    }


    return 0;
}
//