// AiaSoft #345 — ბაბის მულტფილმი 2
// Complexity: O(1)
// Topics: Math, Implementation

#include<bits/stdc++.h>
using namespace std;

int main(){
    int h1, m1, h2, m2;
    cin>>h1>>m1>>h2>>m2;
    int h3, m3;
    h3=((h1+h2+(m1+m2)/60)>=24) ? (h1+h2+(m1+m2)/60)-24 : (h1+h2+(m1+m2)/60);
    m3=(m1+m2>=60) ? m1+m2-60 : m1+m2;
    
    cout<<h3<<" "<<m3;
    cout<<"\n";
    
    return 0;
}