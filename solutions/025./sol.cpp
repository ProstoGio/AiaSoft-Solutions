// AiaSoft #025 — მასივი და მისი ორი ელემენტი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long n, s;
    cin>>n>>s;
    long long a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a, a+n);
    
    
    for(int i=0; i<n; i++){
        int l=i+1, r=n-1;
        while(l<=r){
            int m=(l+r)/2;
            if(a[m]>(s-a[i]))r=m-1;
            if(a[m]<(s-a[i]))l=m+1;
            if(a[m]==(s-a[i])){
                cout<<"YES";
                return 0;
            }
        }
    }
    
    cout<<"NO";


    return 0;
}