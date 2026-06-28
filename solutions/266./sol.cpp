// AiaSoft #266 — უდიდესი ზრდადი ქვემიმდევრობა
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin>>n;
    int a[n], d[n];
    for(int i=0; i<n; i++) cin>>a[i];
    
    d[0]=1; if(a[1]>a[0])d[1]=2;else d[1]=1;
    
    for (int k = 2; k<n; k++){
        d[k]=0;
        for (int j=0; j<k; j++ ){
            if (a[k]>a[j]) d[k] = max(d[k], d[j]);
        }
        d[k]++;
    }
    
    int mx = d[0];
    for (int k = 0; k<n; k++){
       if (mx<d[k]) mx = d[k];
    }
    cout<<mx;
    return 0;
}
