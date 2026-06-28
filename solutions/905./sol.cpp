// AiaSoft #905 — ფიფქების სამკუთხედი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
               
        }
        cout<<endl;
    }


    return 0;
}