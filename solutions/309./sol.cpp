// AiaSoft #309 — შუა ციფრები
// Complexity: O(1)
// Topics: Math, Implementation

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