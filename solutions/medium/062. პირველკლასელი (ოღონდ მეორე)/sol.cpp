#include <bits/stdc++.h>

using namespace std;

int main() {
    int temp=1;
    vector<int> v(10);
    for(int i=0; i<=9; i++){
        v[i]=temp;
        temp*=10;
    }
    
    string s;
    cin>>s;
    string a="", b="";
    char c;
    int idx;
    for(int i=0; i<s.size(); i++){
        if(s[i]!='-' && s[i]!='+' && s[i]!='*'){
            a+=s[i];
        }else{
            c=s[i];
            idx=i;
            break;
        }
    }
    
    for(int i=idx+1; i<s.size(); i++){
        b+=s[i];
    }
    
    long long x=0, y=0;
    int sz1=a.size()-1; 
    int sz2=b.size()-1;
    
    for(int i=0; i<a.size(); i++){
        x+=1LL*(a[i]-48)*v[sz1];
        sz1--;
    }
    
    for(int i=0; i<b.size(); i++){
        y+=1LL*(b[i]-48)*v[sz2];
        sz2--;
    }
    
    if(c=='+'){
        cout<<x+y;
    }else if(c=='-'){
        cout<<x-y;
    }else if(c=='*'){
        cout<<x*y;
    }

    return 0;
}
