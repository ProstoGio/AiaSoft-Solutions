// AiaSoft #812 — უდიდესი კენტი
// Complexity: O(n)
// Topics: Implementation

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int k=0;
    for(int i=0; i<n; i++){
        if(a[i]%2!=0 && a[i]>k)k=a[i];
    }
    if(k==0){
        cout<<-1;
    }
    else cout<<k;


    return 0;
}