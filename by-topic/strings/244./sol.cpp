// AiaSoft #244 — ჩეთბოტი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int question=0, answer=0;
    cin>>n;
    n++;
    while(n--){
        string q;
        getline(cin, q);
        if(q.size()==0)continue;
        int sz=q.size();
        if(q[sz-1]=='?')question++;
            else answer++;
    }
    
    cout<<question<<"\n"<<answer<<"\n";


    return 0;
}