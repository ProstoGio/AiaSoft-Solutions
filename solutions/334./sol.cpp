// AiaSoft #334 — ბაბის სიმბოლო
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    //'0'=48 '9'=57
    string something;
    cin>>something;
    char s2=something[0];
    if(s2>=48 && s2<=57){
    	cout<<"YES";
	}
	else{
		cout<<"NO";
	}


    return 0;
}