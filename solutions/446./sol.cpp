// AiaSoft #446 — დაკარგული რიცხვი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;
const int maxn=1e5;
int b[maxn];
int main() {
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n-1; i++){
        cin>>a[i];
    }
    
    for(int k=0; k<n-1; k++){
        b[a[k]]++;
    }
    
    for(int i=1; i<=maxn; i++){
        if(b[i]==0){
            cout<<i;
            break;
        }
    }
    


    return 0;
}