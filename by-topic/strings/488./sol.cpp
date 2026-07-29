// AiaSoft #488 — გაყოფადობა 11-ზე
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    cin>>n;
    int odd_sum=0, even_sum=0;
    
    for(int i=0; i<n.size(); i++){
        if(i%2==0){
            odd_sum+=(n[i]-'0');
        }else{
            even_sum+=(n[i]-'0');
        }
    }
    
    int res=odd_sum-even_sum;
    if(res%11==0){
        cout<<"YES\n";
    }else{
        cout<<"NO\n";
    }

    return 0;
}