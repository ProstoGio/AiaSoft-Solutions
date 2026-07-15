// AiaSoft #935 — ეშმაკური იდეა
// Complexity: O(log n)
// Topics: Math, Binary Search, Greedy

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, s;
    cin>>n>>s;
    long long Sn=n*(n+1)/2;

    if(Sn==s){
        cout<<0<<"\n";
    }else if(s>Sn){
        cout<<1<<"\n";
    }else{
        long long D=Sn-s;
        long long lo=1, hi=n, ans=n;
        while(lo<=hi){
            long long k=lo+(hi-lo)/2;
            long long V=k*n-k*(k-1)/2;
            if(V-k>=D){
                ans=k;
                hi=k-1;
            }else{
                lo=k+1;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}