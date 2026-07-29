// AiaSoft #535 — ყოვლისშემძლე რიცხვი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, ans=INT_MAX;
    cin>>n;
    vector<int> a(n);
    set<int> st;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]<ans)ans=a[i];
        st.insert(a[i]);
    }
    
    for(auto i : st){
        if(i%ans!=0){
            cout<<-1;
            return 0;
        }
    }
    
    cout<<ans;
    
    cout<<"\n";
    return 0;
}