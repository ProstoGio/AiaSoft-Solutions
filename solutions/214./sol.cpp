// AiaSoft #214 — შეცვალეთ სიმბოლოები
// Complexity: O(n)
// Topics: Implementation, Strings

#include <bits/stdc++.h>
using namespace std;

int main (){
    
    int n;
    cin>>n;
    vector <char> str(n);
    for(int i=0; i<n; i++){
        cin>>str[i];
    }
    
    for(int i=0; i<n; i++){
        if(str[i]<97){
            str[i]=tolower(str[i]);
        }else{
            str[i]=toupper(str[i]);
        }
    }
    
    for(int i=0; i<n; i++){
        cout<<str[i]<<" ";
    }
    
    
    return 0;
}