// AiaSoft #906 — ფიფქების სამკუთხედი -1
// Complexity: O(n²)
// Topics: Implementation, Sequences

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            cout<<"*";
               
        }
        cout<<endl;
    }


    return 0;
}