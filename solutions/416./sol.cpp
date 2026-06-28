// AiaSoft #416 — გივიკო, ნინიკო და კანფეტები
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main (){
	
	int a, b;
	cin>>a>>b;
	int a1=a;
	int b1=b;
	if(a>=100 || b>=100 || a<=1 || b<=1){
		cout<<-1;
		return 0;
	}
	b1=b*2;
	a1=a1-(b1/2);
	if(a1<=0){
		cout<<-1;
		return 0;
	}
	a1=a1*2;
	b1=b1-(a1/2);
	if(b1<=0){
		cout<<-1;
		return 0;
	}
	cout<<a1<<" "<<b1;
	
	
	return 0;
}
//