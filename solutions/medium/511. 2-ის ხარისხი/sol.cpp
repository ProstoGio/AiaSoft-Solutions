#include <bits/stdc++.h>

using namespace std;

long long power(long long n){
    if(n%2!=0 && n!=1){
        return 0LL;
    }else if(n%2!=0 && n==1){
        return 1LL;
    }else if(n%2==0){
        power(n>>1);
    }
}

int main() {
    long long x;
    cin>>x;
    long long ind;
    ind=power(x);
    if(ind==1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
    cout<<"\n";

    return 0;
}
