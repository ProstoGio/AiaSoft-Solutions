// AiaSoft #426 — ტრისკაიდეკაფობია
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main(){
    int k, a, b, cur=0;
    cin>>k>>a>>b;
    if(k<13 && k+a>=13){
        cur=k+a+1;
    }else if((k<13 && k+a<13) || k>=13){
        cur=k+a;
    }
    
    if(cur>13 && cur-b<=13){
        cur=cur-b-1;
    }else if((cur>13 && cur-b>13) || cur<13){
        cur=cur-b;
    }
    
    cout<<cur;
    cout<<"\n";
    
    return 0;
}