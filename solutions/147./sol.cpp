// AiaSoft #147 — განსხვავებული რიცხვების რაოდენობა 1
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    sort(a, a+n);
    int cnt=1, var=a[0];
    for(int i=0; i<n; i++){
        if(var!=a[i]){
            var=a[i];
            cnt++;
        }
    }
    
    cout<<cnt;


    return 0;
}