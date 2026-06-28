// AiaSoft #757 — მიმდევრობა
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, k, cnt=0;
    cin>>n>>k;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]<k)cnt++;
    }
    cout<<cnt;


    return 0;
}