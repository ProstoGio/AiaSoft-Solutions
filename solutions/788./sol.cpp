// AiaSoft #788 — ვინ დგას შუაში?
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
	
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	if(n%2!=0){
		for(int i=0; i<n; i++){
		    if(i==n/2){
			  cout<<a[i];
			  return 0;
	       }
		}	
	
	}
	else{
		for(int i=0; i<n; i++){
		    if(i==n/2){
			  cout<<a[n/2-1]<<" "<<a[n/2];
			  return 0;
	       }
		}	
	}
	 

    return 0;
}