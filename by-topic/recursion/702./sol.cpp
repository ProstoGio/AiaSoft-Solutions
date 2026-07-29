// AiaSoft #702 — ჰანოის კოშკი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

void hanoi(int n, int s, int sp, int tar){
    if(n==1){
        cout<<n<<" "<<s<<" "<<tar<<"\n";
        return;
    }
    
    
    hanoi(n-1, s, tar, sp);
    
    cout<<n<<" "<<s<<" "<<tar<<"\n";
    
    hanoi(n-1, sp, s, tar);
}

int main(){
    int n;
    cin>>n;
    hanoi(n, 1, 2, 3);
    
    return 0;
}