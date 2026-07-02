// AiaSoft #234 — მოზაიკა
// Complexity: O(n³)
// Topics: Implementation, Grid

#include <bits/stdc++.h>
using namespace std;
int n;
char c[100][100];
int ver[100];
int hori[100];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>c[i][j];
        }
    }
    int cntv=1;
    int cnth=1;
    for(int i=0; i<n; i++){
        for(int j=1; j<n; j++){
            if(c[j-1][i]==c[j][i]){
                cntv++;   
            }else{
                ver[i]=max(ver[i], cntv);
                cntv=1;
            }
            if(c[i][j-1]==c[i][j]){
                cnth++;   
            }else{
                hori[i]=max(hori[i], cnth);
                cnth=1;
            }
        }
        ver[i]=max(ver[i], cntv);
        hori[i]=max(hori[i], cnth);
        cntv=1;
        cnth=1;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j>0 && c[i][j-1]!=c[i][j]){
                swap(c[i][j-1], c[i][j]);
                int cntv=1;
                int cnth=1;
                for(int t=1; t<n; t++){
                    if(c[t-1][j]==c[t][j]){
                        cntv++;   
                    }else{
                        ver[j]=max(ver[j], cntv);
                        cntv=1;
                    }
                    if(c[i][t-1]==c[i][t]){
                        cnth++;   
                    }else{
                        hori[i]=max(hori[i], cnth);
                        cnth=1;
                    }
                }
                ver[j]=max(ver[j], cntv);
                hori[i]=max(hori[i], cnth);
                cntv=1;
                cnth=1;
                
                for(int t=1; t<n; t++){
                    if(c[t-1][j-1]==c[t][j-1]){
                        cntv++;   
                    }else{
                        ver[j-1]=max(ver[j-1], cntv);
                        cntv=1;
                    }
                }
                ver[j-1]=max(ver[j-1], cntv);
                cntv=1;
                swap(c[i][j-1], c[i][j]);
            }
            if(j<n-1 && c[i][j]!=c[i][j+1]){
                swap(c[i][j+1], c[i][j]);
                int cntv=1;
                int cnth=1;
                for(int t=1; t<n; t++){
                    if(c[t-1][j]==c[t][j]){
                        cntv++;   
                    }else{
                        ver[j]=max(ver[j], cntv);
                        cntv=1;
                    }
                    if(c[i][t-1]==c[i][t]){
                        cnth++;   
                    }else{
                        hori[i]=max(hori[i], cnth);
                        cnth=1;
                    }
                }
                ver[j]=max(ver[j], cntv);
                hori[i]=max(hori[i], cnth);
                cntv=1;
                cnth=1;
                
                for(int t=1; t<n; t++){
                    if(c[t-1][j+1]==c[t][j+1]){
                        cntv++;   
                    }else{
                        ver[j+1]=max(ver[j+1], cntv);
                        cntv=1;
                    }
                }
                ver[j+1]=max(ver[j+1], cntv);
                cntv=1;
                swap(c[i][j+1], c[i][j]);
            }
            if(i<n-1 && c[i][j]!=c[i+1][j]){
                swap(c[i+1][j], c[i][j]);
                int cntv=1;
                int cnth=1;
                for(int t=1; t<n; t++){
                    if(c[t-1][j]==c[t][j]){
                        cntv++;   
                    }else{
                        ver[j]=max(ver[j], cntv);
                        cntv=1;
                    }
                    if(c[i][t-1]==c[i][t]){
                        cnth++;   
                    }else{
                        hori[i]=max(hori[i], cnth);
                        cnth=1;
                    }
                }
                ver[j]=max(ver[j], cntv);
                hori[i]=max(hori[i], cnth);
                cntv=1;
                cnth=1;
                
                for(int t=1; t<n; t++){
                    if(c[i+1][t-1]==c[i+1][t]){
                        cnth++;   
                    }else{
                        hori[i+1]=max(hori[i+1], cnth);
                        cnth=1;
                    }
                }
                hori[i+1]=max(hori[i+1], cnth);
                cnth=1;
                swap(c[i+1][j], c[i][j]);
            }
            if(i>0 && c[i-1][j]!=c[i][j]){
                swap(c[i-1][j], c[i][j]);
                int cntv=1;
                int cnth=1;
                for(int t=1; t<n; t++){
                    if(c[t-1][j]==c[t][j]){
                        cntv++;   
                    }else{
                        ver[j]=max(ver[j], cntv);
                        cntv=1;
                    }
                    if(c[i][t-1]==c[i][t]){
                        cnth++;   
                    }else{
                        hori[i]=max(hori[i], cnth);
                        cnth=1;
                    }
                }
                ver[j]=max(ver[j], cntv);
                hori[i]=max(hori[i], cnth);
                cntv=1;
                cnth=1;
                
                for(int t=1; t<n; t++){
                    if(c[i-1][t-1]==c[i-1][t]){
                        cnth++;   
                    }else{
                        hori[i-1]=max(hori[i-1], cnth);
                        cnth=1;
                    }
                }
                hori[i-1]=max(hori[i-1], cnth);
                cnth=1;
                swap(c[i-1][j], c[i][j]);
            }
            
            
        }
    }
    sort(hori, hori+n);
    sort(ver, ver+n);
    int answer=max(hori[n-1], ver[n-1]);
    cout<<answer<<"\n";
    
    // for(int i=0; i<n; i++){
    //     cout<<hori[i]<<" ";
    // }cout<<"\n";
    // for(int i=0; i<n; i++){
    //     cout<<ver[i]<<" ";
    // }cout<<"\n";
    
    
    
    return 0;
}