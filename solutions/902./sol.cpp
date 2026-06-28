// AiaSoft #902 — ერთის გამოკლება
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main() {

    string a, b;
    cin >> a;
    b="1";
    string x, y = "";
    if (a.size() > b.size()) {
        x = a;
        int m = b.size(), n = a.size();
        for (int i = 0; i < abs(m - n); i++) {
            y += "0";
        }
        y += b;
    }
    else if (a.size() == b.size()) {
        x = a; y = b;
    }
    
    int re = 0;
    for (int i = x.size() - 1; i >= 0; i--) {
        char n = x[i], m = y[i];
        int dif=(n-'0')-(m-'0')-re;
        //cout<<n<<" "<<m<<endl;
        if(dif<0){
            x[i]=(10+dif)+'0';
            re=1;
            //cout<<x[i]<<endl;
        }else{
            x[i] = dif+'0';
            re=0;
            //cout<<x[i]<<endl;
        }

    }
    
    
        int n=0;
        for(int i=0; i<x.size(); i++){
            if(x[i]=='0')n++;
                else break;
        }
        
        if(n==x.size()){
            cout<<"0";
            return 0;
        }else{
            cout<<x.substr(n);    
        }


    return 0;
}
