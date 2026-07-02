// AiaSoft #479 — სამშენებლო წელიწადი
// Complexity: O(1)
// Topics: Math, Implementation

#include <bits/stdc++.h>
using namespace std;

int main (){
	
	int n, m, k;
	cin>>n>>m;
	k=n/m;
	if(n%m!=0){
		k++;
	}
	cout<<k;
	
	
	return 0;
}