// AiaSoft #678 — დაშიფრული წერილი
// Complexity: O(n^2)
// Topics: Strings, Implementation, Sets

#include <bits/stdc++.h>
using namespace std;

int main (){
    
    string s;
    cin>>s;
    set<string> st;
    for(int i=0; i<s.size(); i++){
        string num="";
        int ind=0;
        int k=i;
        for(int j=k; j<s.size(); j++){
            if(s[j]<97){
                num+=s[j];
                i=j;
            }else{
                break;
            }
        }
        st.insert(num);
        num="";
        
    }
    
    // for(auto x : st){
    //     cout<<x<<" ";
    // }
    
    cout<<st.size()-1;
    
    
    
    return 0;
}