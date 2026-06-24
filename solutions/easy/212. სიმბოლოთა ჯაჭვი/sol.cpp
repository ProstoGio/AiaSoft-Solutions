#include <bits/stdc++.h>
using namespace std;

int main(){
    char c[90];
    for(int i=41; i<=90; i++)c[i]=i;
    char a, b;
    cin>>a>>b;
    if(a<=b){
        for(int i=a; i<=b; i++){
            cout<<c[i]<<" ";
        }
    }else if(a>b){
        for(int i=a; i>=b; i--){
            cout<<c[i]<<" ";
        }
    }
    
    cout<<"\n";
    
    return 0;
}
