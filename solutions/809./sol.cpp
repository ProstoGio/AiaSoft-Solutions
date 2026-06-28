// AiaSoft #809 — 1 და 7
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int barrier, Qty=0;
    cin >> barrier;
    string num1 = "1", num2 = "7";
    int i=0;
    while (true) {
        if (stol(num1) <= barrier) {
            Qty++;
            if(i%2==0)num1+="7";
                else num1+="1";
        }
        else {
            break;
        }
        if (stol(num2) <= barrier) {
            Qty++;
            if(i%2==0)num2+="1";
                else num2+="7";
        }
        else {
            break;
        }
        i++;
    }
    
    cout << Qty;



    return 0;
}

