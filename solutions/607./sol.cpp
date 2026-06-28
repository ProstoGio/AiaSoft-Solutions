// AiaSoft #607 — რიცხვების XOR - 1
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int answer=1;
    for(int i=2; i<=n; i++){
        answer^=i;
    }
    cout<<answer;


    return 0;
}