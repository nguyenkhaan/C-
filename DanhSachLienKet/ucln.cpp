#include <stdio.h> 
#include <iostream>
#include <functional>
using namespace std; 
int main() 
{
    int a; cin>>a; 
    int b; cin>>b; 
    function <int(int,int)> ucln = [&](int a, int b)->int
    {
        if (b==0) return a; 
        else return ucln(b,a%b); 
    }; 
    cout<<ucln(a,b); 
    return 0; 
}