// AiaSoft #200 — რიცხვების შედარება
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b;
    cin>>a;
    cin>>b;
    
    if(a.size()>b.size()){
        cout<<">";
        return 0;
    }else if(a.size()<b.size()){
        cout<<"<";
        return 0;
    }
    
    int sz=a.size();
    for(int i=0; i<sz; i++){
        if(a[i]>b[i]){
            cout<<">";
            return 0;
        }else if(a[i]<b[i]){
            cout<<"<";
            return 0;
        }
    }
    
    cout<<"=\n";
    

    return 0;
}