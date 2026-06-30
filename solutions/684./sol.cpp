// AiaSoft #684 — კიტრი და პომიდორი
// Complexity: O(1)
// Topics: Math, Implementation

#include <iostream>
using namespace std;

int main()
{
    int x, y, n, m, k, g;
    cin>>x>>y>>n>>m;
    k=x*n+y*m;
    if(k%5!=0){
        g=k/5;
        k=(g+1)*5;
    }
    cout<<k/100<<" "<<k%100;

    return 0;
}
