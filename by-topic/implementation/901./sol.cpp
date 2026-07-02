// AiaSoft #901 — ერთის დამატება
// Complexity: O(n)
// Topics: Implementation, Strings

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector <string> str;
    str.push_back("1");
    string s;
    cin >> s;
    
    int n=0;
    if (s[s.size() - 1] != '9') {
        s[s.size() - 1] = s[s.size() - 1] + 1;
    }
    else {
        int k=s.size()-1;
        while(k>=0){
            if (s[k] == '9') {
                n++;     
            }else{
                break;
            }
            
            k--;
        }
        
        if(n!=s.size()){
            s[s.size()-n-1]=s[s.size()-n-1]+1;
        
            int x=s.size()-1;
            while(n--){
                s[x]='0';
                x--;
            }
            
        }else{
           while(n--){
               str.push_back("0");
           } 
           
           for(int i=0; i<str.size(); i++){
               cout<<str[i];
           }
           return 0;
        }
        
    }
    
    
    
    cout<<s;






    return 0;
}