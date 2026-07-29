// AiaSoft #501 — რამდენიმე რიცხვის უსგ
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    
    sort(a.begin(), a.end());
    int temp=a[0];
    
    for(int i=1; i<n; i++){
        temp=gcd(temp, a[i]);
    }
    
    cout<<temp<<"\n";
    


    return 0;
}