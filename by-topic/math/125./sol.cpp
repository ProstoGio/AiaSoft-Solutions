// AiaSoft #125 — ბაქტერია
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, x1, y1, x2, y2;
    cin>>n>>m>>x1>>y1>>x2>>y2;
    
    int answer=max((abs(x1-x2)), (abs(y1-y2)));
    
    cout<<answer;
    
    
    
    cout<<"\n";
    return 0;
}