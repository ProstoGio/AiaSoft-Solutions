// AiaSoft #374 — რიცხვთა ნაერთი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

// int calc(int x){
// 	if(x<10)return 1;
// 	    else return 1+calc(x/10);
	
// }

int main() {
    
    string a, b;
    cin>>a>>b;
    string l1=a+b, l2=b+a;
    if(l1>l2)cout<<l1;
        else cout<<l2;
    

    return 0;
}