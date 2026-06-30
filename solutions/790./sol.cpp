// AiaSoft #790 — ბევრად ბევრი
// Complexity: O(n^2)
// Topics: Implementation, Sequences

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n, i, k;
	cin>>n;
	for(i=1; i<=n; i++){
		for(k=0; k<i; k++){
			cout<<i<<" ";
		}
	}



   return 0;
}