// AiaSoft #012 — მართკუთხედი
// Complexity: O(1)
// Topics: Math, Implementation

#include <bits/stdc++.h>
using namespace std;

struct Rect{
    int p=0;
    Rect(){
        
    }
    
    Rect(int perimeter){
        p=perimeter; // this.
    }
    
    bool isVaild(){
        if(p%2==0 && p!=2)return true;
            else return false;
    }
};


int main(){
    
    int P;
    cin>>P;
    
    Rect r(P);
    if(r.isVaild()==true){
        cout<<1<<endl;
        return 0;
    }else{
        cout<<0<<endl;
        return 0;
    }
    
    
    
    return 0;
}