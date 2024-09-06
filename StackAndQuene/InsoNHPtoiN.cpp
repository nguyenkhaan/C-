#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    int n; cin>>n; 
    queue<string> q; 
    q.push("1"); 
    vector<string> res; 
    res.push_back("1"); 
    for (int i = 0; i<n; i++) 
    {
        string k = q.front(); 
        q.pop(); 
        q.push(k+"0"); 
        res.push_back(k+"0"); 
        q.push(k+"1"); 
        res.push_back(k+"1"); 
    }
    for (int i = 0; i<n; i++) cout<<res[i]<<"  "; 
}