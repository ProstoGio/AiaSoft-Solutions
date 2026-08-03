// AiaSoft #946 — ოთო და ციფრები
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int mn=0, mx=0;
        string s1=s;
     
        
        for(int i=1; i<s1.size()-1; i++){
            if(s1[i-1]=='1' && s1[i+1]=='1' && s1[i]=='0'){
                s1[i]='1';
            }
        }
       
        for(int i=0; i<s1.size(); i++){
            if(s1[i]=='1')mx++;
        }
        
        for(int i=1; i<s1.size()-1; i++){
            if(s1[i-1]=='1' && s1[i+1]=='1' && s1[i]=='1'){
                s1[i]='0';
            }
        }
       
       
        for(int i=0; i<s1.size(); i++){
            if(s1[i]=='1')mn++;
        }
        cout<<mn<<" "<<mx<<"\n"; 
    }
    


    return 0;
}