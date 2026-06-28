// AiaSoft #120 — ყუთები
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;
int n;
int a[10000][3];
int dp[10000];
int main (){
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin>>a[i][j];
        }  
    }
    for(int i=0; i<n; i++){
        if(a[i][1]>a[i][2]){
            swap(a[i][1], a[i][2]);
        }
    }
    
    dp[0]=a[0][0];
    
    for(int i=1; i<n; i++){
        for(int j=0; j<i; j++){
            if(a[i][1]<=a[j][1] && a[i][2]<=a[j][2]){
                dp[i]=max(dp[i], dp[j]+a[i][0]);
            }
        }
        if(dp[i]==0){
            dp[i]=a[i][0];
        }
    }
    
    int answer=0;
    for(int i=0; i<n; i++){
        //cout<<dp[i]<<" ";
        answer=max(answer, dp[i]);
    }cout<<"\n";
    cout<<answer<<"\n";
    
   
	
	
	
	return 0;
}