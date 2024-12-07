#include <bits/stdc++.h> 
#include "BTL.h"
using namespace std; 
#define For(m,n,p) for(m = n; m < p; ++m) 
#define str string
TamGiac a[100]; 
Circle b[100]; 
int i,j; 
void read(TamGiac a[] , int &n1, Circle b[], int &n2)
{
    cout<<"Danh sach tam giac doc duoc: "; 
    cout<<n1<<'\n'; 
    For(i,0,n1)
    {
        for (j = 0; j < 6; j += 2) cout<<a[i].point[j/2].x<<' '<<a[i].point[j/2].y<<' '; 
        cout<<endl; 
    }
    cout<<"Danh sach hinh tron da doc duoc: "; 
    cout<<n2<<'\n'; 
    For(i,0,n2)
    {
        cout<<b[i].point.x<<" "<<b[i].point.y<<" "<<b[i].r<<endl; 
    }
}
int main() 
{
    ifstream f("text.txt"); 
    int n1(0) , n2(0); 
    my_main(f, n1,n2); 
    read(a,n1,b,n2); 
    f.close(); 
}