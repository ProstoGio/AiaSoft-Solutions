// AiaSoft #472 — ოთახის ფართობი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int n;
char g[151][151];
int used[151][151];
int ans=0;

void dfs(int i, int j){
    used[i][j]=1;
    ans++;
    if(g[i-1][j]=='.' && used[i-1][j]==0){
        dfs(i-1, j);
    }
    if(g[i+1][j]=='.' && used[i+1][j]==0){
        dfs(i+1, j);
    }
    if(g[i][j-1]=='.' && used[i][j-1]==0){
        dfs(i, j-1);
    }
    if(g[i][j+1]=='.' && used[i][j+1]==0){
        dfs(i, j+1);
    }
    
}

int main(){
    
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin>>g[i][j];
        }
    }
    
    int mxS=0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(g[i][j]=='.' && used[i][j]==0){
                dfs(i, j);
                if(ans>mxS)mxS=ans;
                ans=0;
            }
        }
        
    }
    
    cout<<mxS;
    
    
    return 0;
}