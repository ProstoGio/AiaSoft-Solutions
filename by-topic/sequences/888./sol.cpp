// AiaSoft #888 — πბონაჩის მიმდევრობა
// Complexity: O(n)
// Topics: Implementation, Sequences

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    double d[n];
    d[0]=0; 
    d[1]=3.14;
    for(int i=2; i<n; i++){
        d[i]=d[i-1]+d[i-2];
    }
    cout<<fixed<<setprecision(2)<<d[n-1];
    

    return 0;
}
