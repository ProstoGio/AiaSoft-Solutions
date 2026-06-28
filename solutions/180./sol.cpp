// AiaSoft #180 — სიტყვები
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;
int n;
vector<string> s;
int main (){
	cin>>n;
	for(int i=0; i<n; i++){
	    string str;
	    cin>>str;
	    s.push_back(str);
	}
	string answer="";
	answer+=s[0];
	
	for(int i=1; i<n; i++){
	   if((s[i-1].size()>=s[i].size() && s[i-1].find(s[i])==string::npos) || (s[i].size()>=s[i-1].size() && s[i].find(s[i-1])==string::npos)){
	        string str1=answer, str2=s[i];
            int tmx=0; bool ind=false;
            for(int t=0; t<min(str1.size(), str2.size()); t++){
                string sufix1=str1.substr(str1.size()-1-t, t+1);
                string prefix2=str2.substr(0, t+1);
                if(sufix1==prefix2){
                    tmx=max(tmx, t);
                    ind=true;
                }
            }
            
            if(ind)answer+=str2.substr(tmx+1);
                else answer+=str2.substr(tmx);
	    }else{
	        answer+=s[i];
	    }
	}
	
	cout<<answer<<"\n";
	
	
	return 0;
}