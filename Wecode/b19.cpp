#include <bits/stdc++.h>
using namespace std; 
#define tamgiac "tam giac " 
#define VUONG "vuong, " 
#define DEU "deu, " 
#define THUONG "thuong, " 
#define CAN "can, " 
#define NO cout<<"Khong phai tam giac" 
double area(int a, int b, int c) 
{
    double p = (a + b + c) / 2; 
    return sqrt(p*(p-a)*(p-b)*(p-c)); 
}
int main() 
{
    int a,b,c; 
    cin >> a >> b >> c; 
    if (a + b > c && a + c > b && b + c > a) {
        cout<<tamgiac; 
        if (a == b && b == c) cout<<DEU; 
        else if (a*a + b*b == c*c || b*b + c*c == a*a || a*a + c*c == b*b) cout<<VUONG; 
        else if (a == b || a == c || b == c) cout<<CAN; 
        else cout<<THUONG; 
        cout<<"dien tich = "<<fixed<<setprecision(2)<<area(a,b,c); 
    }
    else NO; 
}
