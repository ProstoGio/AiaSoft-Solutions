// AiaSoft #752 — ბედნიერი ბილეთი
// Complexity: O(1)
// Topics: Implementation, Math

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a1, a2, a3, a4, a5, a6;
    a1=(n/100000);
    a2=(n/10000)%10;
    a3=(n/1000)%10;
    a4=(n/100)%10;
    a5=(n/10)%10;
    a6=n%10;
    
    if((a1+a2+a3)==(a4+a5+a6)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
    
    
    return 0;
}