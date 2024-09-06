//Ta dung thuat toan Euclid de tim UCLN cua hai so 
#include <stdio.h> 
#include <iostream>
using namespace std; 
int UCLN(int a, int b) 
{
    if (b==0) return a; 
    else return UCLN(b,a%b); 
}
int main() 
{
    int a; cin>>a; 
    int b; cin>>b; 
    cout<<UCLN(a,b);
}