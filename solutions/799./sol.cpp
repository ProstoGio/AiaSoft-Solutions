// AiaSoft #799 — კარგი სამეული
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main (){
	
	int a, b, c;
	cin>>a>>b>>c;
	if(a==b && c!=a || a==c && b!=a || b==c && a!=b){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	
	return 0;
}