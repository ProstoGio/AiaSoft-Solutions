// AiaSoft #885 — წრის ფართობი
// Complexity: O(1)
// Topics: Math, Geometry

#include <bits/stdc++.h>
using namespace std;

template <typename T>
struct Circle{
    T s=0;
    Circle(){
        
    }
    
    Circle(T s){
        this->s=s;
    }
    
    T rad(){
        T r=sqrt(s/3.14);
        return r;
    }
      
};


int main(){
    
    double S;
    cin>>S;
    Circle<double> c(S);
    cout<<c.rad()<<endl;
    
    
    return 0;
}