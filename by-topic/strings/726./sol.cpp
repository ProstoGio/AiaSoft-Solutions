// AiaSoft #726 — მრავალჯერადი ფაქტორიალი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    string n="";
    int k=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]!='!')n+=s[i];
            else k++;
    }
    
    int num=0, sz=n.size();
    int p=1;
    for(int i=0; i<sz-1; i++){
        p*=10;
    }
    
    int idx=0;
    while(sz--){
        num+=(n[idx]-'0')*p;
        p/=10;
        idx++;
        
    }
    
    if(num==1 || num==0){
        cout<<1<<"\n";
        return 0;
    }else if(num==2){
        cout<<2<<"\n";
    }
    
    if(num>=5){
        cout<<0<<"\n";
        return 0;
    }
    
    if(num==3 && k==1){
        cout<<6<<"\n";
    }else if(num==3 && k>1){
        cout<<0<<"\n";
    }else if(num==4 && k==1){
        cout<<4<<"\n";
    }else if(num==4 && k>1){
        cout<<0<<"\n";
    }
    

    return 0;
}