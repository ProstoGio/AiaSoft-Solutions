// AiaSoft #390 — ნაკლული და ნამეტი რიცხვები
// Complexity: O(n)
// Topics: Math, Implementation, Number Theory

#include <bits/stdc++.h>
using namespace std;

int calc(int x){
    
    int p, k=0;
    p=1;
    while(p<=x/2){
        if(x%p==0)k+=p;
        p++;
    }
    
    return k;  
    
}

int main() {
    
    int n;
    cin>>n;
    int cnt=calc(n);
    if(cnt<n)cout<<"defective";
        else if(cnt>n)cout<<"excessive";
            else if(cnt==n)cout<<"none";
    
    

    return 0;
}