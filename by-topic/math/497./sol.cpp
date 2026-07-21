// AiaSoft #497 — ოთხი ფერის ბურთულა
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int answer=a+b+c+d-min({a, b, c, d})+1;
    cout<<answer;

    return 0;
}