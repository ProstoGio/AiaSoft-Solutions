// AiaSoft #141 — ბორანი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int mass, num, sum=0;
    cin>>mass>>num;
    int a[num];
    for(int i=0; i<num; i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum<=mass)cout<<"YES";
     else cout<<"NO";


    return 0;
}