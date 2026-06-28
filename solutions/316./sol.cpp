// AiaSoft #316 — ნაყინები
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    if(n%3==0 || n%5==0 || n%15==0){
        cout<<"YES";
        return 0;
    }else{
        for(int i=1; i<=n/5; i++){
            if((n-5*i)%3==0){
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
    
    return 0;
}