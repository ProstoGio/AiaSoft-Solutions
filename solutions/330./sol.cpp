// AiaSoft #330 — კენტი რიცხვები 3
// Complexity: O(n)
// Topics: Implementation, Math

#include <bits/stdc++.h>
using namespace std;

int main (){
	
    int a, b, i;
    cin>>a>>b;
    
	if(a>b){
	 int k=a;
	 a=b; b=k;
	}
    
    if(a%2!=0){
        cout<<a<<" ";
            a++;
    }

	while(a<b){
	    cout<<a+1<<" ";
	    a=a+2;
	}
	

	
	
	return 0;
}