// AiaSoft #748 — ბედნიერი რიცხვები
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

bool check(int n){
    int a1, a2, a3, a4, a5, a6;
    a1=(n/100000);
    a2=(n/10000)%10;
    a3=(n/1000)%10;
    a4=(n/100)%10;
    a5=(n/10)%10;
    a6=n%10;
    
    if((a1+a2+a3)==(a4+a5+a6)){
        return true;
    }else{
        return false;
    }
}

int main() {
    int a, b;
    cin>>a>>b;
    int cnt=0;
    while(a<=b){
        if(check(a)){
            cnt++;
        }
        a++;
    }
    
    cout<<cnt;

    cout<<"\n";
    return 0;
}