// AiaSoft #142 — ისევ ბორანი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int mass, num, sum=0, quantity=0;
    cin>>mass>>num;
    int a[num];
    for(int i=0; i<num; i++){
        cin>>a[i];
        sum+=a[i];
        quantity++;
        if(sum>mass){
            quantity--;
            cout<<quantity;
            return 0;
        }
    }
    cout<<num;
    


    return 0;
}