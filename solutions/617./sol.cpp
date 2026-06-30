// AiaSoft #617 — მართკუთხედების თანაკვეთა - 1
// Complexity: O(1)
// Topics: Geometry, Implementation

#include <bits/stdc++.h>
using namespace std;

struct Point{
    int x=0, y=0;
    Point(){
        
    }
    
    Point(int x){
        this->x=x;
    }
    
    Point(int x, int y){
        this->x=x;
        this->y=y;
    }
    
};

struct Rect{
    Point p1, p2;
    
    Rect(){
        
    }
    
    Rect(Point p1){
        this->p1=p1;
    }
    
    Rect(Point p1, Point p2){
        this->p1=p1;
        this->p2=p2;
    }
    
    int area(Rect r){
        int a=0, b=0, s=0;
        
        a=min(p2.x, r.p2.x)-max(p1.x, r.p1.x);
        b=min(p2.y, r.p2.y)-max(p1.y, r.p1.y);
        
        if(a<=0 || b<=0)return 0;
            else return a*b;
    }
    
};


int main(){
    
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin>>x1>>y1>>x2>>y2;
    cin>>x3>>y3>>x4>>y4;
    Point p1(x1, y1);
    Point p2(x2, y2);
    Point p3(x3, y3);
    Point p4(x4, y4);
    
    Rect r1(p1, p2);
    Rect r2(p3, p4);
    cout<<r1.area(r2);
    
    
    return 0;
}