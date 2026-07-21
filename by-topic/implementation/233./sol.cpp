// AiaSoft #233 — ჩოგბურთის მატჩის ოქმი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    int ff=0, ss=0, fc=0, sc=0;
    bool f=false, s=false;
    int t=5;
    while(t--){
        int a, b;
        cin>>a>>b;
        ff+=a; ss+=b;
        if(a>b)fc++;
            else sc++;
            
        if(fc==3){
            f=true;
            break;
        }
        if(sc==3){
            s=true;
            break;
        }
    }
    
    if(f)cout<<"FIRST\n";
        else cout<<"SECOND\n";
        
    cout<<ff<<" "<<ss;
    cout<<"\n";

    return 0;
}