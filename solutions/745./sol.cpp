// AiaSoft #745 — ციფრთა ჯამი - 2
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int calc(int x){
    int k=0;
    while(x>0){
        k+=x%10;
        x=x/10;
    }
    return k;
}

int main() {
    
    int a, b;
    cin>>a>>b;
    int maxi=calc(a);
    for(int i=a+1; i<=b; i++){
        if(calc(i)>=maxi)maxi=calc(i);
    }
    cout<<maxi;
    
    

    return 0;
}