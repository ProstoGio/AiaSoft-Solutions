// AiaSoft #668 — ღობის შეღებვა
// Complexity: O(n)
// Topics: Dynamic Programming, Implementation

#include <bits/stdc++.h>
using namespace std;

int main() {

	int n; cin>>n;
	int a[n+1], d[n+1];
	for(int i=1; i<=n; i++)cin>>a[i];
	
	d[0]=0; d[1]=0; d[2]=0; d[3]=0; d[4]=0;
	for(int i=5; i<=n; i++){
		int t=a[i]+a[i-1]+a[i-2]+a[i-3]+a[i-4]+d[i-5];
		d[i]=max(t, d[i-1]);
	}
	
	cout<<d[n]*10;
	
    return 0;
}