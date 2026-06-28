// AiaSoft #362 — მკაცრი ლუწი რიცხვი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    int cnt=0;
    while(n!=0){
        if((n%10)%2!=0){
            cout<<"NO";
            return 0;
        }
        n=n/10;
    }
    
    cout<<"YES";


    return 0;
}