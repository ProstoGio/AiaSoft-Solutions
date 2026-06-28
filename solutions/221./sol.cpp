// AiaSoft #221 — ქალაქი ჩე
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main(){
	
	long long n, r, cnt=0;
	cin>>n>>r;
	vector<long long> v(n); 
	for(long long i=0; i<n; i++){
		cin>>v[i];
	}
	
	sort(v.begin(), v.end());
	
//	for(int i=0; i<n; i++){
//		cout<<a[i]<<" ";
//	}
//	cout<<endl;
	long long rt=0;
	for(long long l=0; l<n; l++){
		while(rt<n && v[rt]-v[l]<=r){
			rt++;
		}
		cnt+=(n-rt);
	}
	
	cout<<cnt;
	
	return 0;
}