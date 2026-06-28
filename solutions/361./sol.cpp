// AiaSoft #361 — ციფრთა ჯამი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int calc(int x){ //12345
	
	if(x<10)return x;
	
	return calc(x/10)+x%10; //calc(1234)
	
}

int main (){
	
	int n;
	cin>>n;
	cout<<calc(n);
	
	
	return 0;
}