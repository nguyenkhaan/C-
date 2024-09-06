//Tim so nguyen duong nho nhat, chi gom 
//so 0 va so 9, chia het cho N --> Giải thuật: chỉ cần liệt kê bộ số nhị phân 
//nhỏ hơn N và nhân 9 lên là đc 
#include <bits/stdc++.h>
#define in(x) cout<<x 
using namespace std; 
int main() 
{
    int n; 
    cin>>n; 
    queue<long> q; 
    q.push(1); 
    while (true) 
    {
        long num = q.front(); 
        if (num*9 % n ==0) { in(num*9); break; } 
        q.pop(); 
        q.push(num*10); 
        q.push(num*10+1); 
    }
}