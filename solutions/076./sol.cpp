// AiaSoft #076 — ეგოისტი ბავშვები
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;
vector <int> v(122);
int main() {
	
	string s1, s2;
	cin>>s1;
	cin>>s2;
	for(int i=0; i<s1.size(); i++){
		v[s1[i]]++;
	}
	for(int i=0; i<s2.size(); i++){
		v[s2[i]]++;
	}
	
	for(int i=97; i<122; i++){
		if(v[i]==0 || v[i]%2==0){
			continue;
		}else if(v[i]%2!=0){
			cout<<"no";
			return 0;
		}
	}
	
	cout<<"yes";
	


    return 0;
}