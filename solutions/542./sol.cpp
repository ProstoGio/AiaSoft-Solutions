// AiaSoft #542 — ჯადოქარი ბიტუნა
// Complexity: O(log n)
// Topics: Math, Bit Manipulation, Strings

#include <bits/stdc++.h>
using namespace std;


int main(){
    string n;
    cin>>n;
    string op1=n;
    int sz=n.size()-1;
    if(op1[sz]=='9'){
        op1[sz]='0';
        op1[sz-1]+=1;
    }else{
        op1[sz]+=1;
    }
    
    int cnt=0;
    string num="";
    for(int i=n.size()-1; i>=0; i--){
        if(cnt<2){
            num+=n[i];
            cnt++;
        }else{
            break;
        }
    }
    int l=0, r=num.size()-1;
    while(l<=r){
        swap(num[l], num[r]);
        l++;
        r--;
    }
    int m;
    if(num.size()==2){
        m=(num[0]-48)*10+(num[1]-48);
    }else{
        m=(num[0]-48);
    }
    
    if(m%4==0)cout<<n;
        else if(m%4==1)cout<<1;
                else if(m%4==2)cout<<op1;
                        else if(m%4==3)cout<<0;
    
    return 0;
}