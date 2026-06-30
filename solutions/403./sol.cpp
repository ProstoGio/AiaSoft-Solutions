// AiaSoft #403 — ბატები და ბატკნები
// Complexity: O(1)
// Topics: Math, Implementation

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int H, F;
    cin>>H>>F;
    int x, y;
    
    y=(F-2*H)/2;
    x=H-y;
    
    if(y<0 || x<0 || (2*x+4*y)!=F){
        cout<<-1;
        return 0;
    }
    
    cout<<x<<" "<<y;
    
    
   
   
    return 0;
}
//