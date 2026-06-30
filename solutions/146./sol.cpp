// AiaSoft #146 — სამკუთხედის ფართობი (გვერდებით)
// Complexity: O(1)
// Topics: Math, Geometry, Implementation

#include <bits/stdc++.h>
using namespace std;

struct Triangle{
    double a=0, b=0, c=0;
    Triangle(){
        
    }
    
    Triangle(double a1){
        a=a1;
    }
    
    Triangle(double a1, double b1){
        a=a1;
        b=b1;
    }
    
    Triangle(double a1, double b1, double c1){
        a=a1;
        b=b1;
        c=c1;
    }    
    
    bool isVaild(){
        if(a+b>c && a+c>b && b+c>a)return true;
            else return false;
    }
    
    double area(){
        double p=(a+b+c)/2;
        double S=sqrt(p*(p-a)*(p-b)*(p-c));
        return S;
    }
};


int main(){
    
    double a, b, c;
    cin>>a>>b>>c;
    
    Triangle t(a, b, c);
    
    if(t.isVaild()==true){
        cout<<fixed<<setprecision(5)<<t.area()<<endl;
        return 0;
    }else{
        cout<<-1;
        return 0;
    }
    
    
    
    return 0;
}