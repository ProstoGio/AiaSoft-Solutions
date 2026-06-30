// AiaSoft #206 — კენტები ლუწების წინააღმდეგ
// Complexity: O(n)
// Topics: Implementation, Strings

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    string s;
    int even=0, odd=0; //even-luwebi, odd-kentebi.
    getline(cin, s);
    for(int i=0; i<s.size(); i++){
        if((s[i]-'0')%2==0)even++;
         else odd++;
    }
    if(even==odd){
        cout<<"Draw";
    }
    else{
      if(even>odd){
          cout<<"Even";
          return 0;
      }
      else{
          cout<<"Odd";
          return 0;
      }
    }

    return 0;
}