// AiaSoft #202 — უცნაური კიბე
// Complexity: O(n)
// Topics: Dynamic Programming, Sequences

#include <bits/stdc++.h>
using namespace std;

int main () {
	
	int n;
	cin>>n;
	long long a[n], d[n];
	
	
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	d[0]=a[0];
	d[1]=a[1];
	
	for(int i=2; i<n; i++){
		d[i]=min(d[i-1], d[i-2])+a[i];
//		cout<<d[i]<<" ";
	}
	cout<<d[n-1];

	
	
	
	return 0;
}