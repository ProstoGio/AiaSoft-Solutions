// AiaSoft #666 — ლურსმნები
// Complexity: O(n log n)
// Topics: Dynamic Programming, Sorting

#include <bits/stdc++.h>
using namespace std;

int main () {
	
	int n;
	cin>>n;
	int a[n+1], d[n+1];
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	sort(a+1, a+n+1);
	
	d[1]=0;
	d[2]=a[2]-a[1];
	d[3]=a[3]-a[1];
	d[4]=d[2]+a[4]-a[3];
	for(int i=5; i<=n; i++){
		d[i]=min(d[i-1], d[i-2])+a[i]-a[i-1];
	}
	
	cout<<d[n];
	
	return 0;
}