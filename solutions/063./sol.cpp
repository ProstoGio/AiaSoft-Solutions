// AiaSoft #063 — ციფრების ჯამი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

//int k=0;

int calc(string s, int k=0){
    if(k>=s.size()){
        return 0;
    }else{
        int cnt=s[k]-48;
        return cnt+calc(s, k+1);
    }
}

int main() {
    
    string s;
    cin>>s;
    cout<<calc(s);


    return 0;
}