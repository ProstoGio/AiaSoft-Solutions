// AiaSoft #347 — ბაბი კინოთეატრში
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main () {
	
	int n, m, b, rigi, nom;
	cin>>n>>m>>b;
	if(b%m==0){
		rigi=b/m;
		nom=m;
	}
	else{
		rigi=b/m+1;
		nom=b%m;
	   
	}
	cout<<rigi<<" "<<nom;
	
	return 0;
}