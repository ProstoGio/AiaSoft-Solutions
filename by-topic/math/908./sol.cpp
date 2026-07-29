// AiaSoft #908 — სუნთქვა 2
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    int k=n/2;
    int r=n%2;
    
    if((k%2==0 && r==0) || (k%2!=0 && r!=0)){
        cout<<"Breathe out";
    }else if((k%2==0 && r!=0) || (k%2!=0 && r==0)){
        cout<<"Breathe in";      
    }
    

    cout<<"\n";
    return 0;
}