// AiaSoft #338 — საბავშვო მოედანი 1
// Complexity: O(1)
// Topics: Implementation, Math

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n, gi, gu;
	cin>>n;
	cin>>gi>>gu;
	if(gi-gu==1 || gu-gi==1 || gi==1 && gu==n || gu==1 && gi==n){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}


    return 0;
}