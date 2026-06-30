// AiaSoft #152 — ცათამბჯენი
// Complexity: O(n)
// Topics: Implementation, Math

#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int up, down, n;
    cin>>up>>down;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    int mxT=(a[0]-1)*up;
    int mx=(a[0]-1)*up;
    //cout<<"Max_ "<<mxT<<endl;
    for(int i=0; i<n-1; i++){
        if(a[i]<a[i+1]){
            mxT+=(a[i+1]-a[i])*up;
            if((a[i+1]-a[i])*up>mx)mx=(a[i+1]-a[i])*up;
        }else if(a[i]>a[i+1]){
            mxT+=(a[i]-a[i+1])*down;
            if((a[i]-a[i+1])*down>mx)mx=(a[i]-a[i+1])*down;
        }else mxT+=0;
                    
        
        
        
        //cout<<"Max_ "<<mxT<<endl;
    }
    
    cout<<mxT<<" "<<mx;
    
    


    return 0;
}