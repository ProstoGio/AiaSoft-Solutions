// AiaSoft #228 — წაშლილი მატრიცა
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin>>s;
    int ans=0;
    int n=sqrt(s.size());
    //int d=0;
    for(int i=0; i<s.size(); i+=n+1){
        ans+=(s[i]-'0');
        //d=d+n+1;
    }
    
    cout<<ans;
    
    cout<<"\n";
    return 0;
}