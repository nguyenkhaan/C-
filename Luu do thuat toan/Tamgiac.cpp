#include <bits/stdc++.h>
using namespace std; 
struct Point //blueprint tự định nghĩa  
//Kiểu dữ liệu tự định nghĩa 
{
    int x; 
    int y; 
}; 
struct Tamgiac //qui tac dat ten
{
    Point a; //x,y 
    Point b; //x,y
    Point c; //x,y -> thuộc tính 
    Tamgiac() {}; 
    Tamgiac(Point _a, Point _b, Point _c) 
    {
        a = _a; 
        b = _b; 
        c = _c; 
    }
    double len(Point a, Point b) 
    {
        return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y)); 
    }
    double area() //method
    {
        double ab = len(a,b); 
        double ac = len(a,c); 
        double bc = len(b,c); 
        double p = (ab + ac + bc)/2;
        return sqrt(p*(p - ab)*(p - ac)*(p - bc)); 
    }   
}; 
int main() 
{
    
}

