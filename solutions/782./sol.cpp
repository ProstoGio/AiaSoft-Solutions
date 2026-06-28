// AiaSoft #782 — სოკო
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, m;
    cin>>n>>m;
    if(m%n==0){
        cout<<m/n;
    }
    else{
        cout<<m/n+1;
    }


    return 0;
}