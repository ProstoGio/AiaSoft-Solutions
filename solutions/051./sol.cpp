// AiaSoft #051 — შესაკრებთა წყვილების პოვნა
// Complexity: O(n log n)
// Topics: Sorting, Greedy

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n, x, cnt=0;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	cin>>x;
	
	sort(a, a+n);	
	int l=0, r=n-1;
	while(l<r){
		if(a[l]+a[r]==x){
			//cout<<a[l]<<" "<<a[r]<<endl;
			cnt++;
			l++;
			r--;
		}
		if(a[l]+a[r]<x){
			l++;
		}
		if(a[l]+a[r]>x){
			r--;
		}
	}
	
	
	cout<<cnt;

    return 0;
}