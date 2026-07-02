// AiaSoft #064 — ფრჩხილებიანი მეორეკლასელები
// Complexity: O(n)
// Topics: Strings, Implementation

#include <bits/stdc++.h>

using namespace std;

int main() {

    string str;
    cin>>str;
    int cnt=0;
    for(int i=0; i<str.size(); i++){
        if(char(str[i])==40)cnt++;
         else if(char(str[i])==41)cnt--;
        
        if(cnt<0){
            cout<<"NO";
            return 0;
        }
        
        
    }
    
    if(cnt>0){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
    
    
    
    
  
    return 0;
}