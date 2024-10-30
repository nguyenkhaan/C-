#include <bits/stdc++.h>
using namespace std; 
void makeThemPositive(int &a, int &b) 
{ 
    int k; 
    if (a < 0 || b < 0) 
    {
        k = 1 + max(abs(a),abs(b)) / min(abs(a),abs(b));  
        if (a <= b) 
        {
            cout<<"1"<<" "<<((b < 0)? -k : k)<<endl; 
            a += k*abs(b); 
        } 
        else if (b <= a) 
        {
            cout<<"2"<<" "<<((a < 0)? -k : k)<<endl;  
            b += k*abs(a);   
        } 
        k = 1 + max(abs(a),abs(b)) / min(abs(a),abs(b));  
        if (a < 0) 
        {
            cout<<'1'<<' '<<k<<endl; 
            a += k*abs(b); 
        } 
        else if (b < 0) 
        {
            cout<<'2'<<' '<<k<<endl; 
            b += k*abs(a);     
        } 
    }
}
void solve() 
{
    int a,b,k;  
    cin>>a>>b;  
    if (a == 0 || b == 0) return; 
    makeThemPositive(a,b); 
    while ((a != b) && (a != 1) && (b != 1)) 
    {
        k = max(abs(a),abs(b)) / min(abs(a),abs(b));  
        if (a > b) 
        {
            cout<<'1'<<' '<<k<<endl; 
            a -= k*b; 
        } 
        else 
        {
            cout<<'2'<<' '<<k<<endl; 
            b -= a*k;
        } 
        if (a == 0 || b == 0) return; 
    }
    if (a == b) cout<<'1'<<' '<<"-1"; 
    else 
    {   
        if (a == 1) cout<<'2'<<' '<<b<<endl; 
        else cout<<'1'<<' '<<a<<endl; 
    }
}
int main() 
{
    solve(); 
}