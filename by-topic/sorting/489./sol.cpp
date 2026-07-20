// AiaSoft #489 — დალაგება სიხშირით
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
        a[i]+=100;
    }
    
    vector<int> freq(201);
    for(int i=0; i<n; i++){
        freq[a[i]]++;
    }
    
    vector<pair<int, int>> v;
    for(int i=0; i<201; i++){
        if(freq[i]!=0){
            v.push_back({freq[i], i});
        }
    }
    sort(v.begin(), v.end(), [](const auto& a, const auto& b){
        if(a.first!=b.first){
            return a.first<b.first;
        }
        return a.second>b.second;
    });
    
    for(auto i : v){
        int k=i.first;
        while(k--){
            cout<<(i.second-100)<<" ";
        }
    }
    
    cout<<"\n";
    
    return 0;
}