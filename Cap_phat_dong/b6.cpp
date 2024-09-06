//Cấp phát động 1 mảng và tính tổng của mảng đó 
#include <stdio.h> 
#include <iostream>
using namespace std; 
int main() 
{
    int *a = new int[100]; 
    int n; cin>>n; 
    int s = 0; 
    for (int i=0; i<n; i++) 
    {
        cin>>a[i]; 
        s+=a[i]; 
    }
    cout<<s; 
    //giai phong lai bo nho 
    delete[] a; 
    return 0;

}