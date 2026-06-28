// AiaSoft #145 — სამკუთხედის ფართობი (კოორდინატებით)
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <bits/stdc++.h>
using namespace std;

struct Point{
    double x=0, y=0;
    Point(){
        
    }
    
    Point(double x){
        this->x=x;
    }
    
    Point(double x, double y){
        this->x=x;
        this->y=y;
    }
    
    double side(Point a){
        return sqrt((abs(a.y-y)*abs(a.y-y))+(abs(a.x-x)*abs(a.x-x)));
    }
};

struct Triangle{
    Point a, b, c;
    double a1=0, b1=0, c1=0;
    Triangle(){
        
    }
    
    Triangle(Point a){
        this->a=a;
    }
    
    Triangle(Point a, Point  b){
        this->a=a;
        this->b=b;
    }
    
    Triangle(Point a, Point  b, Point c){
        this->a=a;
        this->b=b;
        this->c=c;
    }
    
    void calcSides(){
        a1=a.side(b);
        b1=a.side(c);
        c1=b.side(c);
    }
    
    double area(){
        double p=(a1+b1+c1)/2;
        double s=sqrt(p*(p-a1)*(p-b1)*(p-c1));
        return s;
    }
};






int main(){
    
    double x1, y1, x2, y2, x3, y3;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>x3>>y3;
    
    Point p1(x1, y1);
    Point p2(x2, y2);
    Point p3(x3, y3);
    
    Triangle t(p1, p2, p3);
    t.calcSides();
    
    
    cout<<fixed<<setprecision(5)<<t.area()<<endl;
    
    
    
    return 0;
}