#include <bits/stdc++.h>
using namespace std; 
struct Point 
{
    int x; 
    int y; 
}; 
struct TamGiac //Ban thiet ke 
{
    Point a; 
    Point b; 
    Point c; 
    TamGiac(Point a, Point b, Point c) //Ham constructor 
    {
        this->a = a;  
        this->b = b; 
        this->c = c; //Su dung tu khoa this 
    }
    double len(Point a, Point b) 
    {
        return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y)); 
    }
    double area() 
    {
        double ab = len(a,b); 
        double ac = len(a,c); 
        double bc = len(b,c); 
        double p = (ab + bc + ac)/2.0; 
        return sqrt(p*(p - ab)*(p - bc)*(p - ac)); 
    }
}; 
int main() 
{
    TamGiac myTria({0,0},{0,4},{3,0}); 
    cout<<myTria.area(); 
}