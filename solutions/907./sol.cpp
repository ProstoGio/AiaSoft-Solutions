// AiaSoft #907 — ფიფქების კვადრატი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int n;
    cin>>n;
    string a[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            a[i][j]="0";
        }
    }
    
    for(int i=0; i<n; i++){
        a[0][i]="*";
    }
    
    for(int i=0; i<n; i++){
        a[i][0]="*";
    }
    
    for(int i=0; i<n; i++){
        a[i][n-1]="*";
    }
    
    for(int i=0; i<n; i++){
        a[n-1][i]="*";
    }
    
    
    
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(a[i][j]!="0")cout<<a[i][j];
                else cout<<" ";
        }
        cout<<endl;
    }


    return 0;
}