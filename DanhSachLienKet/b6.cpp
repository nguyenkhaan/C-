#include <stdio.h> 
#include <iostream> 
#include <functional>
using namespace std; 
int main() 
{
    int a; cin>>a; 
    int b; cin>>b; 
    function<int(int,int)> ucln = [&](int x, int y)->int //Phai dung dau & de lambda tu tham chieu chinh no
    {
        if (y==0) return x; 
        else return ucln(y,x%y); 
    }; 
    cout<<ucln(a,b); 
    return 0; 
}