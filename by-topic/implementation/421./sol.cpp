// AiaSoft #421 — ტურისტი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    cin>>n;
    cin>>a>>b;

    int dist=a;
    int cnt=1;
    int d=a;
    
    while(dist<n){
        dist+=(d+b);
        cnt++;
        d+=b;
    }
    
    cout<<cnt;
    cout<<"\n";
    return 0;
}