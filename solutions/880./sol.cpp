// AiaSoft #880 — გრძელი მოედანი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    double r, x, y, sX, sR;
    cin>>r>>x;
    y=2*r; 
    sX=y*x; //მართკუთხედის ფართობი
    sR=3.141592653589793238462643383279502884197*(r*r); //წრის ფართობი
    double S=sX+sR; 
    cout<<fixed<<setprecision(4)<<S;


    return 0;
}