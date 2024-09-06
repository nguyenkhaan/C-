#include <stdio.h> 
#include <iostream>
using namespace std; 
void swap(int &a, int &b) 
{
    int t = a; 
    a = b; 
    b = t; 
}
int main() 
{
    int t; cin>>t; 
    for (int j=0; j<t; j++) 
    {
    int a,b,c; cin>>a>>b>>c;
    for (int i=0; i<=4; i++) 
    {
        if (a<=b) swap(a,b); 
        if (a<=c) swap(a,c); 
        if (b<=c) swap(b,c); 
        c++; 
    }
    cout<<a*b*c<<endl; 
    }
    return 0; 
}