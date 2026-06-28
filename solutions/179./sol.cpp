// AiaSoft #179 — ცხრილი
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;
int h, w, leftBoundary=100, rightBoundary=0, topBoundary=100, bottomBoundary=0;
char matrix[100][100];
int main(){
    cin>>h>>w;
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin>>matrix[i][j];
            if(matrix[i][j]=='*'){
                if(j<leftBoundary){
                    leftBoundary=j;
                }
                if(j>rightBoundary){
                    rightBoundary=j;
                }
                if(i<topBoundary){
                    topBoundary=i;
                }
                if(i>bottomBoundary){
                    bottomBoundary=i;
                }
            }
        }
    }
    for(int i=topBoundary; i<=bottomBoundary; i++){
        for(int j=leftBoundary; j<=rightBoundary; j++){
            if(matrix[i][j]=='.')matrix[i][j]='*';
        }
    }
    
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cout<<matrix[i][j];
        }
        cout<<"\n";
    }
    
    return 0;
}