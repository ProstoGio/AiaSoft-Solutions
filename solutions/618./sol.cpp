// AiaSoft #618 — მართკუთხედების თანაკვეთა - 2
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

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
    Point a, b;
    
    Rect(){
        
    }
    
    Rect(Point a){
        this->a=a;
    }
    
    Rect(Point a, Point b){
        this->a=a;
        this->b=b;
    }
    
    Rect interception(Rect r2){
        int x1, x2, y1, y2;
        x1=max(a.x, r2.a.x);
        y1=max(a.y, r2.a.y);
        x2=min(b.x, r2.b.x);
        y2=min(b.y, r2.b.y);
        
        Point p1(x1, y1);
        Point p2(x2, y2);
        Rect r3(p1, p2);
        
        return r3;
    }
    
    int area(){
        int w=b.x-a.x;
        int h=b.y-a.y;
        if(w<=0 || h<=0)return 0;
            else return w*h;
    }
    
};


int main(){
    
    int n;
    cin>>n;
    vector<Rect> r(n);
    for(int i=0; i<n; i++){
        int x1, y1, x2, y2;
        cin>>x1>>y1>>x2>>y2;
        Point p1(x1, y1);
        Point p2(x2, y2);
        r[i].a=p1;
        r[i].b=p2;
    }
    
    Rect rec=r[0].interception(r[1]);
    
    for(int i=2; i<n; i++){
        rec=rec.interception(r[i]);
    }
    
    cout<<rec.area();
    
    
    
    
    return 0;
}