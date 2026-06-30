// AiaSoft #126 — ფიბონაჩის მიმდევრობა 1
// Complexity: O(n)
// Topics: Dynamic Programming, Recursion, Sequences

#include <bits/stdc++.h>
using namespace std;

long long F[100];

long long Fib(int x){
    
    if(F[x]>0)return F[x];
    
    if(x==1 || x==2)return 1;
    long long ans=Fib(x-1)+Fib(x-2);
    
    F[x]=ans;
    return ans;
}

int main() {
    
    int n;
    cin>>n;
    long long ans=Fib(n);
    
    cout<<ans;


    return 0;
}