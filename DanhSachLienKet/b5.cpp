#include <stdio.h> 
#include <iostream>
#include <stdbool.h>
using namespace std; 
int main() 
{
    //Viet ham kiem tra so nguyen to 
    int n; cin>>n; 
    auto Check = [=]()->bool 
    {
        for (int i=2; i*i<=n; i++) if (n%i==0) return false;
        return true;  
    };
    if (Check() == true) cout<<"La nguyen to"; 
    else cout<<"Khong la nguyen to"; 
}