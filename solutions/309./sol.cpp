// AiaSoft #309 — შუა ციფრები
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, a, b;
	cin>>n;
	a=n/100 %10;
	b=n/10 %10;
	int k=a+b;
	cout<<k;

    return 0;
}