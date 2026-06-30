// AiaSoft #540 — უდიდესი AND
// Complexity: O(n log max(ai))
// Topics: Bit Manipulation, Greedy

#include <bits/stdc++.h>
using namespace std;
int n;
vector<long long> b(200002);

int main(){
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    
    int ans=0;
    for(int i=31; i>=0; i--){
        ans=ans|(1<<i);
        int cnt=0;
        for(int j=0; j<n; j++){
            if((b[j]&ans)==ans)cnt++;
        }
        if(cnt<=1)ans=ans^(1<<i);
        
    }
    
    cout<<ans<<"\n";
    
    
    
    return 0;
}
