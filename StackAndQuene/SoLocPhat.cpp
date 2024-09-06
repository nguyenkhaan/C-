#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    int n;
    cin>>n; 
    queue<string> q; 
    q.push("6"),q.push("8"); 
    int d = 1; 
    while (d<n) 
    {
        string temp = q.front(); 
        cout<<temp+"6"<<"  "; 
        cout<<temp+"8"<<"  "; 
        q.pop(); 
        q.push(temp+"6"); 
        q.push(temp+"8"); 
        d = temp.size() + 1; 
    }
}