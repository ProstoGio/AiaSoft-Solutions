// AiaSoft #670 — ბანკომატი
// Complexity: O(n * k)
// Topics: Dynamic Programming

#include <bits/stdc++.h>
using namespace std;

int main() {
    int k,n;
    cin>>k>>n;
    int a[k+1];
    vector <int> d(n+1,-1);
    d[0]=0;

    for(int i=1; i<=k; i++){
        cin>>a[i];
        if(a[i]<=n){
            d[a[i]]=1;
        }
    }

    for(int i=1; i<=n; i++){
        if(d[i]==1)continue;
        
        for(int j=1; j<=k; j++){
            if(a[j]<=i && d[i-a[j]]!=-1){
                int mn=d[i-a[j]]+1;
                if(d[i]==-1 || mn<d[i]){
                    d[i]=mn;
                }
            }
        }
    }

    // for(int i=1; i<=n; i++){
    //     cout<<d[i]<<" ";
    // }
    cout<<d[n];
    cout<<endl;

    return 0;
}