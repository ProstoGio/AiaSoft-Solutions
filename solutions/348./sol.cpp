// AiaSoft #348 — ინდექსები
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int cnt=0, num, Searchable_num;
    cin>>num>>Searchable_num;
    int a[num];
    for(int i=0; i<num; i++){
        cin>>a[i];
    }
    for(int i=0; i<num; i++){
        if(a[i]==Searchable_num){
            cout<<i<<" ";
            cnt++;
        }
    }
    if(cnt==0)cout<<-1;
    


    return 0;
}