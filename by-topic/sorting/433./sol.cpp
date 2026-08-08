// AiaSoft #433 — უცნაური დოღი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<pair<int,int>> a;
    for(int i=0; i<n; i++){
        int v;
        cin>>v;
        a.push_back({v, i+1});
    }
    
    sort(a.begin(), a.end());
    
    cout<<a[n-2].second;
    cout<<"\n";


    return 0;
}