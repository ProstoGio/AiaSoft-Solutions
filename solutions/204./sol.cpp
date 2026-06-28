// AiaSoft #204 — კალია გრასი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int m[1000001];

int knowledge(int x){
    
    if(x==1){
        return 0;
    }
    
    if(m[x]!=0)return m[x];
    int t=1+knowledge(x-1);

    if(x%2==0)t=min(t, 1+knowledge(x/2));
        
    if(x%3==0)t=min(t, 1+knowledge(x/3));
        
    m[x]=t;
    return t;

   
}

int main() {
    int n;
    cin>>n;
    
    int res=knowledge(n);
    cout<<res;

    return 0;
}
