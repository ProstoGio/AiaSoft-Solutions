// AiaSoft #118 — ჯვარი
// Complexity: O(T * (M + N))
// Topics: Implementation, Grid

#include <bits/stdc++.h>
using namespace std;
int m, n;
char c[1100][1100];
int t, answer;

int main(){
    cin>>m>>n;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=n; j++){
            cin>>c[i][j];
        }
    }
    cin>>t;
    while(t--){
        int x, y;
        cin>>x>>y;
        int sumR=0, sumL=0, sumD=0, sumU=0;
        for(int i=x-1; i>=1; i--){
            if(c[i][y]=='1')sumU++;
                else break;
        }
        for(int i=x+1; i<=m; i++){
            if(c[i][y]=='1')sumD++;
                else break;
        }
        for(int i=y-1; i>=1; i--){
            if(c[x][i]=='1')sumL++;
                else break;
        }
        for(int i=y+1; i<=n; i++){
            if(c[x][i]=='1')sumR++;
                else break;
        }
        int cnt=0;
        if(x<m && c[x+1][y]=='0'){cnt++;}
        if(x>1 && c[x-1][y]=='0'){cnt++;}
        if(y<n && c[x][y+1]=='0'){cnt++;}
        if(y>1 && c[x][y-1]=='0'){cnt++;}
        cnt+=(c[x][y]=='0') ? 1 : 0;
        if((x==1 || x==m || y==1 || y==n) || cnt>1){
            cout<<-1<<"\n";
            continue;
        }
        
        if(c[x][y]=='0'){
            answer=sumR+sumL+sumD+sumU+1;
            cout<<answer<<"\n";
            continue;
        }else{
            if(x<m && c[x+1][y]=='0'){
                int sumD2=0;
                int ind=true;
                for(int i=x+1; i<=m; i++){
                    if(c[i][y]=='1')sumD2++;
                        else if(c[i][y]=='0' && ind){
                            sumD2++;
                            ind=false;
                        }else break;
                }
                
                answer=sumL+sumR+sumU+sumD2+1;
                cout<<answer<<"\n";
                continue;
            }
            if(x>1 && c[x-1][y]=='0'){
                int sumU2=0;
                int ind=true;
                for(int i=x-1; i>=1; i--){
                    if(c[i][y]=='1')sumU2++;
                        else if(c[i][y]=='0' && ind){
                            sumU2++;
                            ind=false;
                        }else break;
                }
                
                answer=sumL+sumR+sumD+sumU2+1;
                cout<<answer<<"\n";
                continue;
            }
            if(y<n && c[x][y+1]=='0'){
                int sumR2=0;
                int ind=true;
                for(int i=y+1; i<=n; i++){
                    if(c[x][i]=='1')sumR2++;
                        else if(c[x][i]=='0' && ind){
                            sumR2++;
                            ind=false;
                        }else break;
                }
                
                answer=sumL+sumR2+sumD+sumU+1;
                cout<<answer<<"\n";
                continue;
            }
            if(y>1 && c[x][y-1]=='0'){
                int sumL2=0;
                int ind=true;
                for(int i=y-1; i>=1; i--){
                    if(c[x][i]=='1')sumL2++;
                        else if(c[x][i]=='0' && ind){
                            sumL2++;
                            ind=false;
                        }else break;
                }
                
                answer=sumL2+sumR+sumD+sumU+1;
                cout<<answer<<"\n";
                continue;
            }
        }
        int sumR2=0, sumL2=0, sumU2=0, sumD2=0;
        int ind=true;
        for(int i=y+1; i<=n; i++){
            if(c[x][i]=='1')sumR2++;
                else if(c[x][i]=='0' && ind){
                    sumR2++;
                    ind=false;
                }else break;
        }
        ind=true;
        for(int i=y-1; i>=1; i--){
            if(c[x][i]=='1')sumL2++;
                else if(c[x][i]=='0' && ind){
                    sumL2++;
                    ind=false;
                }else break;
        }
        ind=true;
        for(int i=x-1; i>=1; i--){
            if(c[i][y]=='1')sumU2++;
                else if(c[i][y]=='0' && ind){
                    sumU2++;
                    ind=false;
                }else break;
        }
        ind=true;
        for(int i=x+1; i<=m; i++){
            if(c[i][y]=='1')sumD2++;
                else if(c[i][y]=='0' && ind){
                    sumD2++;
                    ind=false;
                }else break;
        }
        ind=true;
        int ans1=sumR2+sumL+sumD+sumU+1;
        int ans2=sumR+sumL2+sumD+sumU+1;
        int ans3=sumR+sumL+sumD2+sumU+1;
        int ans4=sumR+sumL+sumD+sumU2+1;
        
        answer=max({ans1, ans2, ans3, ans4});
        cout<<answer<<"\n";
        
    }
    
    
    return 0;
}