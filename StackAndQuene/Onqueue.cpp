//Viet chuong trinh sinh ra day nh phan tu 1 - n 
#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    int n; cin>>n; 
    queue<string> q; 
    q.push(1); 
    for (int i =0; i<n; ++i) {
        string s = q.front; 
        q.pop(); 
        cout<<(s + "0")<<endl; 
        q.push(s + "0"); 
        cout<<(s + "1")<<endl;  
        q.push(s + "1"); 
    }
}