// AiaSoft #866 — ლუწი რიცხვების ჯამი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    int a[n];
    int cnt=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%2==0)cnt+=a[i];
    }
    
    cout<<cnt;


    return 0;
}