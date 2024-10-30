#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    int n; 
    cin>>n; 
    int i; 
    char x = 'a'; 
    while (x != 'X') 
    {
        i = 0; 
        cin>>x; 
        if (x != 'X') 
        {
            while (i < n) {
                cout<<x<<" "; 
                ++i; 
            }
            cout<<endl; 
        }
    }
}