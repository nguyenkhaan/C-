//cap phat dong cho mot chuoi, nhap chuoi tu nguoi dung vahien thi 
#include <stdio.h> 
#include <iostream>
#include <string>
using namespace std; 
int main() 
{
    char *s = new char[2000000]; 
    cin>>s;  
    cout<<s; 
    delete[] s; 
}