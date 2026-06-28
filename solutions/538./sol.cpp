// AiaSoft #538 — ჭადრაკის დაფა და დედოფლები
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;
char g[100][100];
int ans = 0;

bool check(int i, int t) {
    int i1=i,t1=t;
    while (i1>=0 && t1<=7) {
        if (g[i1][t1]=='1')return false;
        i1--;
        t1++;
    }
    
    i1=i; t1=t;
    while (i1<=7 && t1<=7) {
        if (g[i1][t1]=='1')return false;
        i1++;
        t1++;
    }
    
    i1=i; t1=t;
    while (i1>=0 && t1>=0) {
        if (g[i1][t1]=='1')return false;
        i1--;
        t1--;
    }
    
    i1=i; t1=t;
    while (i1<=7 && t1>=0) {
        if (g[i1][t1]=='1')return false;
        i1++;
        t1--;
    }
    
    for(int p=0; p<=7; p++){
        if(g[p][t]=='1')return false;
        if(g[i][p]=='1')return false;
    }
    
    return true;
}

void rec(int i) {
    if (i == 8) {
        ans++;
        return;
    }
    for (int t = 0; t < 8; t++) {
        if (g[i][t] == '.' && check(i, t)) {
            g[i][t] = '1';
            rec(i + 1);
            g[i][t] = '.';
        }
    }
}

int main() {
    for (int i = 0; i < 8; i++) {
        for (int t = 0; t < 8; t++) {
            cin >> g[i][t];
        }
    }
    
    rec(0);
    
    cout<<ans<<"\n";
    
    return 0;
}
