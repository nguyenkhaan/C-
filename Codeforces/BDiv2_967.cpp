#include <bits/stdc++.h>
using namespace std; 
void solve() 
{
    string s; 
    cin>>s; 
    int n = s.size(); 
    for (int i = s.size()/2; i<n; ++i) 
    {
        string s1 = s.substr(0,i + 1); 
        if (2*(i + 1) >= n) 
        {
            string s2 = s.substr(i - 2*(i+1) + n + 1); 
            if (s1 == s2 && s1.size() < n && s2.size() < n) {
                cout<<"yes"<<endl; 
                cout<<s1<<endl; 
                return; 
            }
        }  
    }
    cout<<"no"; 
}
int main() 
{
    solve(); 
}