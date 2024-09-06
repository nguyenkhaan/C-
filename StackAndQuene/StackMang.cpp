//Thao tac push: Day 1 phan tu vao ngawn xep 
//Thao tac pop: Xoa 1 phan tu khoi ngan xep 
//Thao tac top: lay phan tu o top trong ngan xep
//Thao tac size: lay so phan tu 
#include <iostream> 
using namespace std; 
int n = 0; int stack[10001]; 
void push(int x) 
{
    stack[n] = x;
    n++; 
}
void pop() 
{
    if (n>=1) --n; 
}
int top() 
{
    if (n>=1) return stack[n-1]; 
}
int size() 
{
    return n; 
}
int main() 
{
    cout<<"Qua trinh lam day Stack: "<<endl; 
    for (int i=1; i<=10; i++) 
    {
        push(i); 
        for (int j=0; j<n; j++) cout<<stack[j]<<"  "; 
        cout<<endl;
    }
    cout<<"Qua trinh lay ra khoi Stack: "<<endl; 
    int m = size(); 
    for (int i=0; i<m; i++) 
    {
        for (int j=0; j<n; j++ ) cout<<stack[j]<<"  "; 
        cout<<endl; 
        pop(); 
    }
}