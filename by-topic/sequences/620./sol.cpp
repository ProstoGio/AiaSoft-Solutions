// AiaSoft #620 — მშვიდი მიმდევრობა
// Complexity: O(n)
// Topics: Dynamic Programming, Sequences, Math

#include <bits/stdc++.h>
using namespace std;

int main () {
	
	int n;
	cin>>n;
	long long d[n+1];
	d[0]=0;
	d[1]=2;
	d[2]=3;
	for(int i=3; i<=n; i++){
		d[i]=d[i-2]+d[i-1];
	} 
	cout<<d[n];
	
	
	
	return 0;
}