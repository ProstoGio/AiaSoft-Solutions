// AiaSoft #803 — კრუიზი ავტობუსებით
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n, m, k;
	cin>>n>>m>>k;
	if(n%m==0)m=n/m;
	else m=n/m+1;
	if(m%k==0)k=m/k;
	else k=m/k+1;
	cout<<m<<" "<<k;


    return 0;
}