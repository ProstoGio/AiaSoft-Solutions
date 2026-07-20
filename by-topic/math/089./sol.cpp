// AiaSoft #089 — მორები
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin>>m>>n;
    
    int k=n-m;
    if(k<0 || (k==0 && m>0)) {
        cout<<"Impossible"<<endl;
    }else{
        cout<<k<<endl;
    }
    
    return 0;
}