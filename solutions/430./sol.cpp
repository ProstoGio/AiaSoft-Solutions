// AiaSoft #430 — ჭკვიანი თხუნელა
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
#define ln long long
using namespace std;

ln d[41][41];

int main (){
	
	int n;
	cin>>n;
	n=(n+1)/2;
	
	for(int i=1; i<=n; i++){
		d[i][1]=1;
		d[1][i]=1;	
	}
	
	for(int i=2; i<=n; i++){
		for(int j=2; j<=n; j++){
			d[i][j]=d[i-1][j]+d[i][j-1];
		}
	}
	
	cout<<d[n][n];
	
	
	return 0;
}