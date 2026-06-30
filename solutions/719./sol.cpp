// AiaSoft #719 — მძლავრად ბმული კომპონენტების რაოდენობა
// Complexity: O(n²)
// Topics: Graphs, Recursion

#include <bits/stdc++.h>

using namespace std;

int n,m,t = 1;
int t_out[10001];
int g[10001][10001], gr[10001][10001];
int used1[10001], used2[10001];

void DFS1(int v){
    used1[v] = 1;
    for(int i=1; i<=n; i++){
        if(g[v][i] == 1){
            if(used1[i] == 0){
                DFS1(i);
            }
        }
    }
    t_out[t] = v;
    t++;
}

void DFS2(int v){
    used2[v] = t;
    for(int i=1; i<=n; i++){
        if(gr[v][i] == 1){
            if(used2[i] == 0){
                DFS2(i);
            }
        }
    }
    
}

int main() {
    cin>>n>>m;
    
    for(int i=1; i<=m; i++){
        int a,b; cin>>a>>b;
        g[a][b] = gr[b][a] = 1;
    }
    
    for(int i=1; i<=n; i++){
        if(used1[i] == 0) DFS1(i);
    }
    
    int x = 0;
    for(int i=n; i>=1; i--){
        if(used2[t_out[i]] == 0){ DFS2(t_out[i]); x++;}
    }
    
    cout<<x;
 
   
    return 0;
}