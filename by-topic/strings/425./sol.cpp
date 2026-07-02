// AiaSoft #425 — სიმრავლეები
// Complexity: O(n² log n)
// Topics: Strings, Recursion, Sorting

#include <bits/stdc++.h>
#define pb push_back
using namespace std;
stack <char> st;
vector <string> lst;
map <string, int> m;

vector<string> sol(string s){
    vector<string> l;
    string temp="";
    for(int i=1; i<s.size()-1; i++){
        if(s[i]=='{'){
            st.push('{');
            temp+='{';
        }
        if(s[i]=='}'){
            st.pop();
            temp+='}';
        }
        if(st.empty()){
            l.pb(temp);
            temp="";
        }
    }
    return l;
}

void srt(string &str){
    vector<string> v=sol(str);
    stable_sort(v.begin(), v.end(), [](const string &a, const string &b) {
        return a.length()<b.length();
    });
    
    for(int i=0; i<v.size(); i++){
        if(v[i].size()<=2)continue;
            else srt(v[i]);
        
    }
    string tmp="{";
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            tmp+=v[i][j];
        }
    }
    tmp+='}';
    
    str=tmp;
}

int main(){
    string s;
    cin>>s;
    string temp="";
    for(int i=1; i<s.size()-1; i++){
        if(s[i]=='{'){
            st.push('{');
            temp+='{';
        }
        if(s[i]=='}'){
            st.pop();
            temp+='}';
        }
        if(st.empty()){
            lst.pb(temp);
            temp="";
        }
    }
    
    for(int i=0; i<lst.size(); i++){
        srt(lst[i]);
    }
    
    for(int i=0; i<lst.size(); i++){
        m[lst[i]]++;
    }
    int answer=0;
    for(int i=0; i<lst.size(); i++){
        answer=max(answer, m[lst[i]]);
    }
    cout<<answer;
    cout<<"\n";
    
    return 0;
}