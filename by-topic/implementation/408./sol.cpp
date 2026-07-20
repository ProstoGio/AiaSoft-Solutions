// AiaSoft #408 — სამი გოჭი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, nif=0, naf=0; //, nuf=0;
    cin>>n;
    while(n--){
        int a, b; // a - nif ; b - naf ; 1 - sciss ; 2 - stone ; 3 - net ;
        cin>>a>>b;
        // if(a==b){
        //     nuf++;
        //     continue;
        // }
        
        if((a==1 && b==2) || (a==2 && b==3) || (a==3 && b==1))naf++;
            else if((a==1 && b==3) || (a==2 && b==1) || (a==3 && b==2))nif++;
    }
    
    if(nif==naf)cout<<"Nuf-Nuf";
        else if(nif>naf)cout<<"Nif-Nif";
                else if(nif<naf)cout<<"Naf-Naf";
                
    cout<<"\n";
    
    
    return 0;
}