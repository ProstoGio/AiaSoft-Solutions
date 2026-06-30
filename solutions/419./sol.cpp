// AiaSoft #419 — ავზი
// Complexity: O(1)
// Topics: Math, Greedy

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    int cnt=0;
    cnt=cnt+n/5*5;
    cnt=cnt+(n%5/3*3);
    
    if(n>5){
		if(n==7)cout<<1;
		   else cout<<0;
	}else{
	    cout<<n-cnt;
	}
    
    
    return 0;
}