// AiaSoft #903 — ქალაქ ბაიას მერი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n, m;
    cin >> n >> m;
    int g[n + 1][n + 1] = { 0 };
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g[u][v] = g[v][u] = 1;
    }

    int a[n+1] = { 0 }; 
    for (int i = 1; i <= n; i++) {
        int cnt = 0;
        for (int j = 1; j <= n; j++) {
            if (g[i][j] == 1)cnt++;
        }
        a[i] = cnt;
    }

    int mx = a[1], ind = 1;
    for (int i = 2; i <= n; i++) {
        if (a[i] > mx) {
            mx = a[i];
            ind = i;
        }
        else if (a[i] == mx && i > ind) {
            ind = i;
        }
    }

    cout << ind;
    
    return 0;
}

