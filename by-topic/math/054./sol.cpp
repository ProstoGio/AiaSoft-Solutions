// AiaSoft #054 — მონეტები
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, s;
    cin>>n>>s;
    if(s<=n){
        cout<<1;
        cout<<"\n";
        return 0;
    }
    
    int answer=s/n;
    if(answer*n!=s)answer++;
    
    cout<<answer;
    cout<<"\n";


    return 0;
}