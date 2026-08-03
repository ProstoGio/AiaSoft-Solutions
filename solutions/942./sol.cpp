// AiaSoft #942 — რა დარჩება?
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    int odd=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]%2!=0)odd++;
    }
    
    if(odd%2!=0)cout<<"Odd";
        else cout<<"Even";
    
    cout<<"\n";


    return 0;
}