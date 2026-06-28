// AiaSoft #821 — ნულების გადასმა
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    
    string num;
    getline(cin, num);
    string num2="";
    int quanityofzeros=0;
    for(int i=0; i<num.size(); i++){
        if(char(num[i])!='0'){
            num2+=num[i];
        }else{
            quanityofzeros++;
        }
    }
    for(int i=0; i<quanityofzeros; i++){
        num2+="0";
    }
    cout<<num2;

    return 0;
}