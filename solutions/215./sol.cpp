// AiaSoft #215 — მატრიცის შევსება
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main () {
	
	int n, x;
	cin>>n>>x;
	int matrix[n][n];
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			matrix[i][j]=x;
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	return 0;
}