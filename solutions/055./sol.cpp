// AiaSoft #055 — გაფუჭებული ვაშლები
// Complexity: O(N * M)
// Topics: Implementation, Grid

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int N, M, x, y;
    cin>>N>>M>>x>>y;
    int a[N+1][M+1];
    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++){
            a[i][j]=0;
        }
    }
    

    a[x][y]=1;
    a[x-1][y-1]=1;
    a[x-1][y]=1;
    a[x-1][y+1]=1;
    a[x][y+1]=1;
    a[x+1][y+1]=1;
    a[x+1][y]=1;
    a[x+1][y-1]=1;
    a[x][y-1]=1;
    
    for(int i=1; i<=N; i++){
        for(int j=1; j<=M; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}