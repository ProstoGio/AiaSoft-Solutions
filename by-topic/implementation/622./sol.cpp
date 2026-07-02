// AiaSoft #622 — სანაყინე
// Complexity: O(n)
// Topics: Math, Implementation

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    int lari3=0;
    int lari5=n/5;
    while(lari5>=0){
        if((n-(lari5*5))%3==0){
            lari3=(n-(lari5*5))/3;
            break;
        }
        lari5--;
    }
    cout<<lari3<<" "<<lari5;

    return 0;
}
