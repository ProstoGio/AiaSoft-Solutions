// AiaSoft #762 — კონგრუენტულობა
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;
int freq[150];
char mp[150];
char mp2[150];
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    string s;
    cin>>s;
    
    // lexicographically smallest
    for(int i=0; i<s.size(); i++)freq[s[i]]++;
    
    // for(int i=65; i<=90; i++){
    //     cout<<char(i)<<"_ "<<freq[i]<<" ";
    // }cout<<"\n";
    
    char temp = 'A';
    for(int i=65; i<=90; i++){
        if(freq[i]>0 && mp[i]==0){
            mp[i]=temp++;
        }
    }
    
    // lexicographically largest
    
    char temp2 = 'Z';
    for(int i=90; i>=65; i--){
        if(freq[i]>0 && mp2[i]==0){
            mp2[i]=temp2--;
        }
    }
    
    for(int i=0; i<s.size(); i++){
        cout<<mp[s[i]];
    }cout<<"\n";
    
    for(int i=0; i<s.size(); i++){
        cout<<mp2[s[i]];
    }cout<<"\n";
    
    
    
    
    return 0;
}