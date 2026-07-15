// AiaSoft #401 — საუკუნე
// Complexity: O(1)
// Topics: Implementation, Math

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>=2000 && n<=2099)cout<<21;
        else if(n>=1900 && n<=1999)cout<<20;
                else cout<<-1;
    
    cout<<"\n";
    
    return 0;
}