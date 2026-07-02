// AiaSoft #013 — მოქმედებები ვექტორზე
// Complexity: O(Q * N)
// Topics: Implementation, Sequences

#include <bits/stdc++.h>
using namespace std;

vector <int> v;

void push(){
    int x;
    cin>>x;
    v.push_back(x);
}

void insrt(){
    int p, x;
    cin>>p>>x;
    v.insert(v.begin()+p-1, x);
}

void del(){
    int p1, p2;
    cin>>p1>>p2;
    v.erase(v.begin()+p1-1, v.begin()+p2);
}


int main() {
    
    
    int q;
    cin>>q;
    while(q--){
        string s;
        cin>>s;
        if(s=="push"){
            push();
        }
        
        if(s=="pop"){
            v.pop_back();
        }
        
        if(s=="insert"){
            insrt();
        }
        
        if(s=="erase"){
            del();
        }
        
        if(s=="print"){
            for(int i=0; i<v.size(); i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        
    }
    
    

    return 0;
}