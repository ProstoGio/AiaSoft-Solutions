// AiaSoft #177 — ჩატეხილი კიბე 1
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, x;
    cin>>n>>x;
    int d[n+1];
    if(1==x)d[1]=0;
        else d[1]=1;
    
    if(2==x)d[2]=0;
        else if(x==1)d[2]=1;
                else d[2]=2;
                
    for(int i=3; i<=n; i++){
        if(i==x)d[i]=0;
            else d[i]=d[i-1]+d[i-2];
        
    }
    cout<<d[n];  //<<endl;
    
    // for(int i=1; i<=n; i++){
    //     cout<<d[i]<<" ";
    // }


    return 0;
}