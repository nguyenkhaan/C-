#include <stdio.h> 
#include <iostream> 
using namespace std; 
int n = 0; 
int maxN = 10000; 
int a[100000];
void push(int x) 
{
    if (n == maxN) return; 
    a[n] = x;
    n++;
}
void pop()
{
    if (n==0) return; 
    for (int i=0; i<n-1; i++) a[i] = a[i+1]; 
    n--; 
}
int size() 
{
    return n;
}
int main() 
{
    cout<<"Qua trinh them phan tu vao hang doi: "<<endl; 
    for (int i=1; i<=6; i++) 
    {
        push(i); 
        for (int j=0; j<size(); j++) cout<<a[j]<<"  "; 
        cout<<endl; 
    }
    cout<<"Qua trinh xoa phan tu ra khoi hang doi: "<<endl; 
    for (int i=1; i<=6; i++) 
    {
        pop(); 
        for (int j=0; j<size(); j++) cout<<a[j]<<"  "; 
        cout<<endl;
    }
    return 0; 
}