// AiaSoft #747 — გამყოფები - 4
// Complexity: O((b-a) * sqrt(b))
// Topics: Implementation, Number Theory

#include <bits/stdc++.h>
using namespace std;

int main() { 
    int a, b;
    cin>>a>>b;
    for(int t=a; t<=b; t++){
        int cnt=0;
        for(int i=1; i<=sqrt(t); i++){
            if(t%i==0){
                cnt++;
                if(i!=sqrt(t)) {
                    cnt++;
                }
            }
        }
        cout<<cnt<<" ";
    }
    
    cout<<"\n";
    
    return 0;
}