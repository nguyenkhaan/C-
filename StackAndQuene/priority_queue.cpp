#include <bits/stdc++.h>
using namespace std; 
#define N 2e5 
int main() 
{
    priority_queue<char, vector<char>, greater<char>> q; 
    //khi them cac phan tu vao priority_queue luon la phan tu lon nhat hoac nho nhat 
    q.push('a'); 
    q.push('b'); 
    q.push('c'); 
    q.push('d');  
    q.pop();
    cout<<q.top(); 
}