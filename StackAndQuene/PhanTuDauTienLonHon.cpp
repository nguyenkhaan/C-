#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    int n; 
    cin>>n; 
    vector<int> a(n+2); 
    for (int i = 0; i<n; i++) cin>>a[i]; 
    a[n] = INT_MAX; 
    stack<int> right; 
    right.push(n); 
    for (int i = n-1; i>=0; i--) 
    {
        while (a[i] > a[right.top()]) 
        {
            right.pop(); 
        }
        cout<<a[i]<<"  "<<right.top()<<endl;  
        right.push(i); 
    }
}