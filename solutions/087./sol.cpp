// AiaSoft #087 — N რიცხვის ჯამი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

long long a[20];

long long funq(long long n){
    long long sum=0;
    for(int i=0; i<n; i++){
        sum+=a[i];
    }
    return sum;
}


int main (){
	
    long long n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	
	cout<<funq(n);
	

	
	
	return 0;
}