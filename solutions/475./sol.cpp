// AiaSoft #475 — ორის ხარისხების ჯამი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include<bits/stdc++.h>
using namespace std;
vector<long long> bin(1000999, 0);
vector<long long> freq(1000999, 0);
int main(){
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
        freq[a[i]]++;
    }
    
    for(int i=0; i<1000999; i++){
        if(freq[i]>1){
            freq[i+1]+=freq[i]/2;
            freq[i]%=2;
        }
    }
    
    
    
    long long idx;
    for(int i=0; i<1000999; i++){
        if(freq[i]==1){
            bin[i]=1;
            idx=i;
        }
    }
    for(long long i=idx; i>=0; i--){
        cout<<bin[i];
    }
    
    
    
    return 0;
}