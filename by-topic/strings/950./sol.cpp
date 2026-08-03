// AiaSoft #950 — ახალი სიტყვები
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string s1, s2;
    cin>>s1;
    cin>>s2;
    int k=0;
    
    string temp="";
    for(int i=0; i<s2.size(); i++){
        temp+=s2[i];
        int sztmp=temp.size();
        int szs1=s1.size();
        
        if(temp[sztmp-1]==s1[szs1-1]){
            bool ind=true;
            int p=szs1-1;
            for(int j=sztmp-1; j>=0; j--){
                if(temp[j]==s1[p]){
                    p--;
                }else{
                    ind=false;
                    break;
                }
            }
            if(ind)k=max(k, sztmp);
        }
        
    }
    
    string s3=s1;;
    for(int i=k; i<s2.size(); i++){
        s3+=s2[i];
    }
    
    cout<<s3;
    cout<<"\n";
    


    return 0;
}