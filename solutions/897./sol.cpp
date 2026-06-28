// AiaSoft #897 — სად არის პირველად?
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;
int n, q;
vector<int> freq(1000001, -1);
int main() {
    cin>>n>>q;
    for(int i=0; i<n; i++){
        int a;
        cin>>a;
        if(freq[a]==-1)freq[a]=i+1;
    }
    
    for(int i=0; i<q; i++){
        int querry;
        cin>>querry;
        cout<<freq[querry]<<"\n";
    }
    
    

    return 0;
}