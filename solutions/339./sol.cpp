// AiaSoft #339 — საბავშვო მოედანი 2
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int quanity;
    cin>>quanity;
    int first, sec;
    cin>>first>>sec;
    int sum1=max(first,sec)-min(first,sec)-1;
    int sum2=quanity-sum1-2;
    int sum=min(sum1,sum2);
    cout<<sum;


    return 0;
}