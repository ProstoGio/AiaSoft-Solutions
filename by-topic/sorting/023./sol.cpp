// AiaSoft #023 — ინვერსიების რაოდენობა (მარტივი)
// Complexity: O(n^2)
// Topics: Implementation, Sorting

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    int answer=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i<j && a[i]>a[j])answer++;
        }
    }
    
    cout<<answer;
    cout<<"\n";
    
    
    return 0;
}