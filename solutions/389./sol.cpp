// AiaSoft #389 — სრულყოფილი რიცხვი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

string funq(int x){
    int k=0;
    for(int p=1; p<=x-1; p++){
        if(x%p==0)k=k+p;
    }
    if(k==x)return "yes";
     else return "no";
}

int main() {
    
    int n, p, k=0;
    cin>>n;
    cout<<funq(n);



    return 0;
}