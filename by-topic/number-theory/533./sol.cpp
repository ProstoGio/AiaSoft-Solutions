// AiaSoft #533 — უახლოესი ჯერადი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t--){
        long long a, b;
        cin>>a>>b;
        if(a%b==0){
            cout<<0<<"\n";
            continue;
        }
        
        long long c1=(a/b)*b;
        long long c2=c1+b;
        
        cout<<min(abs(c1-a), abs(c2-a))<<"\n";
    }


    return 0;
}