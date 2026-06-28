// AiaSoft #337 — რეგისტრის ცვლილება
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
int n; cin>>n;
char a[n];
for(int k=0;k<n;k++) cin>>a[k];
for(int k=0;k<n;k++){
    if(a[k]<=90) cout<<(char)(a[k]+32)<<(char)13<<(char)10;
    else cout<<(char)(a[k]-32)<<(char)13<<(char)10;
}

    return 0;
}