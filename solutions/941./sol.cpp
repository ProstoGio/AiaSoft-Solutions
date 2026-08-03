// AiaSoft #941 — წყლის სვეტები
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, answer=0;
    cin>>n;
    vector<int> h(n);
    for(int i=0; i<n; i++){
        cin>>h[i];
        answer=max(answer, h[i]);
    }
    
    cout<<answer;
    
    
    


    return 0;
}