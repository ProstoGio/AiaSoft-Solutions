// AiaSoft #605 — გადაიყვანე ორობითში
// Complexity: O(log n)
// Topics: Implementation, Math

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int long long x; cin>>x;
    string ans="";
    if(x==0){
        cout<<0;
        return 0;
    }else{
        while(x>0){
            char c=x%2+'0';
            ans+=c;
            x/=2;
        }
    
        reverse(ans.begin(), ans.end());
    
        cout<<ans;
    }

    return 0;
}