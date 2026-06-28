// AiaSoft #149 — განსხვავებული სიმბოლოების რაოდენობა
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	string s;
	cin>>s;
	set<char> st;
	
	for(int i=0; i<s.size(); i++){
		st.insert(s[i]);
	}
	
	cout<<st.size();
	

    return 0;
}