// AiaSoft #068 — ბიოლოგიური რიტმები
// Complexity: O(N)
// Topics: Math, Implementation, Number Theory

#include <iostream>
//#include <numeric>
#define ll long long
using namespace std;

int main() {
    
    ll a[12]={0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
    ll d1, d2, d3, d4;
    ll m1, m2, m3, m4;
    cin>>d1>>m1;
    cin>>d2>>m2;
    cin>>d3>>m3;
    cin>>d4>>m4;
    
    ll k1=d1+a[m1-1];
    ll k2=d2+a[m2-1];
    ll k3=d3+a[m3-1];
    ll k4=d4+a[m4-1];
    
    ll p=k4+1;
    while(true){
        if((p-k1)%23==0 && (p-k2)%28==0 && (p-k3)%33==0) {
            cout<<p-k4;
            break;
        }
        
        p++;
        
    }
    

    return 0;
}