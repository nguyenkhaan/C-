#include <bits/stdc++.h>
// #include <stack>
using namespace std; 
int main()
{
    stack<int> binary; 
    int n; cin>>n; 
    while (n) 
    {
        binary.push(n%2); 
        n/=2; 
    }
    while (binary.empty() == false) 
    {
        cout<<binary.top()<<"  "; 
        binary.pop(); 
    }
}