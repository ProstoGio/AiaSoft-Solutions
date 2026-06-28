// AiaSoft #247 — უდიდესი ციფრი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int funq(int a){
    return max(a/10, a%10);
}

int main() {
    
    int x; cin>>x;
    cout<<funq(x);


    return 0;
}