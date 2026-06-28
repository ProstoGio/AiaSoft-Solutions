// AiaSoft #711 — რიცხვებით თამაში
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

int func1(int a){
    if(a<9000)return a+1000;
        else return a;
}

int func2(int a){
    if(a%10!=1)return a-1;
        else return a;
}

int func3(int a){
    int a1=a/1000;
    int a2=a/100 %10;
    int a3=a/10 %10;
    int a4=a%10;
    return a2*1000+a3*100+a4*10+a1;
}

int func4(int a){
    int a1=a/1000;
    int a2=a/100 %10;
    int a3=a/10 %10;
    int a4=a%10;
    return a4*1000+a1*100+a2*10+a3;
}

vector<int> used(10000);
vector<int> d(10000);
void bfs(int A, int B){
    queue<int> q;
    q.push(A);
    used[A]=1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        int a, b, c, e;
        a=func1(u);
        b=func2(u);
        c=func3(u);
        e=func4(u);
        if(u==B){
            cout<<d[u];
            exit(0);
        }
        
        if(!used[a]){
            q.push(a);
            used[a]=1;
            d[a]=d[u]+1;
        }
        if(!used[b]){
            q.push(b);
            used[b]=1;
            d[b]=d[u]+1;
        }
        if(!used[c]){
            q.push(c);
            used[c]=1;
            d[c]=d[u]+1;
        }
        if(!used[e]){
            q.push(e);
            used[e]=1;
            d[e]=d[u]+1;
        }
    }
}


int main(){
    
    int A, B;
    cin>>A>>B;
    bfs(A, B);

    //cout<<func1(A)<<" "<<func2(A)<<" "<<func3(A)<<" "<<func4(A);
    
    
    return 0;
}