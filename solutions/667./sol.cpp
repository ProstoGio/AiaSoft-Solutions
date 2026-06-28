// AiaSoft #667 — ბაბიმ თვლა ისწავლა
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin>>n;
	int d[n+1];
	d[1]=2; d[2]=2;
	for(int i=3; i<=n; i++){
		d[i]=d[i-1]+d[i-2];
	} 
	cout<<d[n];
	
	
    return 0;
}