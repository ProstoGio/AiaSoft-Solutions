// AiaSoft #828 — კატო და საყვარელი სიმბოლო
// Complexity: O(n)
// Topics: Implementation, Strings

#include <iostream>
using namespace std;

int main() 
{
    string s; cin>>s; int n=s.size(); 
    char mx;  cin>>mx;
    
    int count=0;
    for(int i=0;i<n;i++){
      if(s[i]==mx or s[i]==mx-32 or s[i]==mx+32){
         count++;
      }
    } 
    cout<<count;
    return 0;
} 