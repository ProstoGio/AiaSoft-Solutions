// AiaSoft #822 — ნულების ამოგდება
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    string n;
    cin>>n;
    string n2="";
    for(int i=0; i<n.size(); i++){
        if(n[i]!='0')n2+=n[i];
    }
    
    cout<<n2;
    
    cout<<"\n";


    return 0;
}