// AiaSoft #766 — ჯამი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;
long long t;

int main(){
    
    cin>>t;
    while(t--){
        long long s, f, answer=0;
        cin>>s>>f;
        long long p=f-s;
        s=(s%9==0) ? 9 : s%9;
        f=(f%9==0) ? 9 : f%9;
        answer+=(p/9)*45;
        if(f<s){
            for(long long i=s; i<=9; i++){
                answer+=i;
            }
            for(long long i=1; i<=f; i++){
                answer+=i;
            }
        }else if(f>=s){
            for(long long i=s; i<=f; i++){
                answer+=i;
            }
        }
        
        cout<<answer<<"\n";
    }
    
    
    
    
    return 0;
}