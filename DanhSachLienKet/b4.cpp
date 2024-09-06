#include <stdio.h> 
#include <iostream>
using namespace std; 
int main() 
{
    int a; cin>>a; 
    int b; cin>>b; 
    auto Tong = [](int a, int b) 
    {
        cout<<a+b; 
    };
    Tong(a,b); 

}