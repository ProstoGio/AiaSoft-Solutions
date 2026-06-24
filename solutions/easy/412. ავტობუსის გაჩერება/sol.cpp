#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n, m, x, y;
    cin>>n>>m; 
    cin>>x>>y;
    int total=n+m;
    int sitting=min(total, x);
    int standing=min(total-sitting, y);
    int couldnt_fit=total-sitting-standing;
    
    cout<<sitting<<" "<<standing<<" "<<couldnt_fit; 
    cout<<"\n";
    
    return 0;
}
