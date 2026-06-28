// AiaSoft #818 — ელემენტები დიაპაზონიდან
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, x, y, counter=0, in_sum=0;
    cin>>n>>x>>y;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]>=x && a[i]<=y){
            counter++;
            in_sum=in_sum+a[i];
        }
    }
    if(counter==0){
        cout<<-1<<endl;
    }else{
        cout<<counter<<" "<<in_sum<<endl;
    }


    return 0;
}