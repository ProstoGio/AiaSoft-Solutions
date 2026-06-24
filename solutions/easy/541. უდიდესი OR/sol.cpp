#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    int mx=0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        mx=max(mx, a[i]);
    }
    
    int answer=0;
    for(int i=0; i<n; i++){
        if(mx==a[i])continue;
        answer=max(answer, mx|a[i]);
    }
    
    cout<<answer;
    cout<<"\n";
    return 0;
}
