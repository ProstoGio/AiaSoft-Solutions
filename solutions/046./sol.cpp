// AiaSoft #046 — ათეულები და ასეულები
// Complexity: O(1)
// Topics: Math, Implementation

#include <bits/stdc++.h>

using namespace std;

int main() {

    int a, sum=0, b; 
	cin>>a;
	b=a/100;
	int c=a/10 %10;
	sum=b+c;
	cout<<sum;
    
    return 0;
}