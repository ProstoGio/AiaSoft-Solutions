// AiaSoft #514 — მიიღე მესამე
// Complexity: O(1)
// Topics: Math, Implementation

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int a, b, c;
	cin>>a>>b>>c;
	if(a+b==c){
		cout<<"YES"<<endl<<a<<"+"<<b<<"="<<c; 
		return 0;
	}
	if(a-b==c){
		cout<<"YES"<<endl<<a<<"-"<<b<<"="<<c; 
		return 0;
	}
	if(a*b==c){
		cout<<"YES"<<endl<<a<<"*"<<b<<"="<<c;
		return 0;
	}
	if(b!=0 && a/b==c){
		cout<<"YES"<<endl<<a<<"/"<<b<<"="<<c;
		return 0;
	}
	if(b!=0 && a%b==c){
		cout<<"YES"<<endl<<a<<"%"<<b<<"="<<c;
		return 0;
	}
    cout<<"NO";
    

    return 0;
}