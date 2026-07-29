// AiaSoft #853 — გამოკლება ლაშას წესით
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    while(cin>>s){
        int ans=0;
        string num1="", num2="";
        bool ind=false;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='-'){
                ind=true;
                continue;
            }
            
            if(!ind){
               num1+=s[i]; 
            }else{
                num2+=s[i];
            }
        }
        
        int n1=0, n2=0, sz1=num1.size(), sz2=num2.size();
        
        int k1=1, k2=1;
        
        for(int i=0; i<sz1-1; i++){
            k1*=10;
        }
        for(int i=0; i<sz2-1; i++){
            k2*=10;
        }
     
     
        int idx1=0, idx2=0;
        while(sz1--){
            n1+=(num1[idx1]-48)*k1;
            k1/=10;
            idx1++;
            
        }
       
        while(sz2--){
            n2+=(num2[idx2]-48)*k2;
            k2/=10;
            idx2++;
            
        }
        //cout<<n1<<" "<<n2<<"\n";
        
        if(n1-n2<0)ans=0;
            else ans=n1-n2;
        
        cout<<ans<<"\n";
    }
    
    
    
    return 0;
}