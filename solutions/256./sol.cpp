// AiaSoft #256 — რიცხვის ძიება მასივში - 1
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        if(a[i]==x){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";


    return 0;
}