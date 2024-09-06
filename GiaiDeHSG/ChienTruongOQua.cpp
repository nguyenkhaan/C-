#include <stdio.h> 
#include <iostream> 
using namespace std; 
int stack[10000]; 
int n; 
int m = 0; 
void push(int x) 
{
    stack[m] = x; 
    m++; 
}
void pop() 
{
    if (m>=1) m--; 
}
int top() 
{
    if (m>=0) return stack[m-1]; 
    return -1; 
}
int main() 
{
    int left[1000]; 
    int k = 0; 
    cin>>n; 
    int a[1000]; 
    a[0] = 0; a[n+1] = 0; 
    for (int i=1; i<=n; i++) cin>>a[i]; 
    push(0); 
    for (int i=1; i<=n; i++) 
    {
        while (a[i]<a[top()]) pop(); 
        left[k++] = top(); 
        push(i); 
    }
    int right[1000]; 
    k = n-1; 
    m = 0; 
    push(n+1); 
    for (int i=n; i>=1; i--) 
    {
        while (a[i]<a[top()]) pop(); 
        right[k--] = top(); 
        push(i); 
    }
    int MAX = 0; 
    for (int i=0; i<n; i++) MAX = max(MAX,(right[i] - left[i] -1)*a[i+1]); 
    cout<<MAX; 
    return 0;
}
