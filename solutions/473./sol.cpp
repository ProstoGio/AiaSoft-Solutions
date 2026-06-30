// AiaSoft #473 — არითმეტიკული ქვემიმდევრობა
// Complexity: O(n)
// Topics: Implementation, Sequences

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    while(cin>>n){
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
    
        int d=a[1]-a[0];
        int ind=0;
        for(int i=1; i<n-1; i++){
            if(a[i+1]-a[i]!=d){
                ind=i;
                d=a[i+1]-a[i];
            }
        }
    
        cout<<ind+1<<endl;
    
    }
    
    

    return 0;
}