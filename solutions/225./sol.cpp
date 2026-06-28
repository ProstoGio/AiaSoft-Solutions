// AiaSoft #225 — ხალისოს დერეფანი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int a[22][22];


int main (){
	
	int n, m;
	cin>>n>>m;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			cin>>a[i][j];
		}
	}
	
	for(int i=2; i<=n; i++){
		for(int j=1; j<=m; j++){
			a[i][j]=a[i][j]+max({ a[i-1][j-1], a[i-1][j], a[i-1][j+1] });
		}
	}
	
	int ans=a[n][1];
	for(int i=2; i<=n; i++){
		if(a[n][i]>ans)ans=a[n][i];
	}
	
	cout<<ans;
	
	
	return 0;
}