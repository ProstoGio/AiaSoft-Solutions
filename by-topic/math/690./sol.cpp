// AiaSoft #690 — საშუალო პროგრამისტული
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    long long a, b;
    cin>>a>>b;
    long long ap=a*b-(a+b);
    
    if(ap>=0)cout<<"high";
        else cout<<"low";
    
    cout<<"\n";

    return 0;
}