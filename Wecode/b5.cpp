#include <bits/stdc++.h>
using namespace std; 
#pragma GCC optimize("O3") 
#define DEU cout<<"DEU" 
#define VUONG cout<<"VUONG" 
#define CAN cout<<"CAN" 
#define KHONG cout<<"KHONG" 
#define NHON cout<<"NHON" 
#define TU cout<<"TU" 
double deg(int a, int b, int c) 
{
    return (acos((a*a + b*b - c*c) / (2.0*a*b)) / M_PI)*180.0; 
}
void solve() 
{
    int a,b,c; 
    cin >> a >> b >> c; 
    if (a + b > c && a + c > b && c + b > a) {
        //kiem tra tam deu truoc 
        if (a == b && a == c && c == b) DEU; 
        else if (a == b || b == c || c == a) CAN; 
        else if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) VUONG; 
        else
        {
            if (deg(a,b,c) > 90 || deg(a,c,b) > 90 || deg(b,c,a) > 90) TU; 
            else NHON; 
        }
        return; 
    }
    KHONG; 
}
int main() 
{
    solve(); 
}