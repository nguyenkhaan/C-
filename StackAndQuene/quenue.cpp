#include <bits/stdc++.h>
using namespace std; 
//LIFO 
//FIFO -- giong viec xep hang di mua 
// push(), pop(), front(), empty(), size()   O(1) 
int main() 
{
    queue<int> q; 
    q.push(1); 
    q.push(2); 
    q.push(3); 
    q.push(4); 
    q.pop(); 
    cout<<q.front();
}