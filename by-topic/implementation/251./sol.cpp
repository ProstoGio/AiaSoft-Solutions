// AiaSoft #251 — მასივის სეგმენტის შემობრუნება - 1
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    cin>>n;
    vector<int> x(n);
    for(int i=0; i<n; i++){
        cin>>x[i];
    }
    cin>>a>>b;
    
    int l=a-1, r=b-1;
    while(l<=r){
        swap(x[l], x[r]);
        l++;
        r--;
    }
    
    for(auto i : x){
        cout<<i<<" ";
    }
    
    cout<<"\n";
    return 0;
}
