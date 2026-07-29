// AiaSoft #082 — ისევ ფრჩხილები
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin>>s;
    stack<char> st;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='(')st.push('(');
            else if(s[i]=='[')st.push('[');
                    else if(s[i]=='{')st.push('{');
                    
        if(s[i]==')'){
            if(!st.empty()){
                if(st.top()=='('){
                    st.pop();
                }else{
                    cout<<"NO\n";
                    return 0;
                }
            }else{
                cout<<"NO\n";
                return 0;
            }
        }else if(s[i]==']'){
            if(!st.empty()){
                if(st.top()=='['){
                    st.pop();
                }else{
                    cout<<"NO\n";
                    return 0;
                }
            }else{
                cout<<"NO\n";
                return 0;
            }
        }else if(s[i]=='}'){
            if(!st.empty()){
                if(st.top()=='{'){
                    st.pop();
                }else{
                    cout<<"NO\n";
                    return 0;
                }
            }else{
                cout<<"NO\n";
                return 0;
            }
        }
    }
    int cnt1=0, cnt2=0, cnt3=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='(')cnt1++;
            else if(s[i]==')')cnt1--;
        
        if(s[i]=='[')cnt2++;
            else if(s[i]==']')cnt2--;
        
        if(s[i]=='{')cnt3++;
            else if(s[i]=='}')cnt3--;
    }
    
    if(!(cnt1==0 && cnt2==0 && cnt3==0)){
        cout<<"NO\n";
        return 0;
    }
    
    cout<<"YES\n";
    
    
    return 0;
}