// AiaSoft #934 — დიდი რიცხვები
// Complexity: O(log(min(N, M)))
// Topics: Math, Number Theory

#include <bits/stdc++.h>
using namespace std;
long long n, m, d;
string answer="";
int main(){
    cin>>n>>m>>d;
    long long mx=max(n, m), mn=min(n, m);
    while(true){
        if(mn!=0){
            long long k=mn;
            mn=mx%k;
            mx=k;
        }else{
            break;
        }
    }
    
    long long cnt=max(mn, mx);
    if(cnt>1000000){
        for(int i=0; i<1000000; i++){
            answer+=d+48;
        }
        cout<<answer<<"\n";
        return 0;
    }else{
        for(int i=0; i<cnt; i++){
            answer+=d+48;
        }
        cout<<answer<<"\n";
        return 0;
    }
    
    
    
    
    return 0;
}