// AiaSoft #787 — დაადგინე არის თუ არა მარტივი(მარტივი ვერსია)
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        int k=2;
        for(int p=2; p<=a[i]/2; p++){
            if(a[i]%p==0)k++;
        }
        if(k>2)cout<<0<<" ";
         else cout<<1<<" ";
    }


    return 0;
}