#include <stdio.h> 
#include <iostream> 
#include <string>
using namespace std; 
void solve() 
{
    char a[100]; 
    char b[100]; 
    cin>>a; 
    cin>>b; 
    char t;
    t = a[0]; a[0] = b[0]; b[0] = t; 
    cout<<a<<" "<<b<<endl; 
}
int main() 
{
    int t; cin>>t; 
    for (int i=0; i<t; i++) solve(); 
    return 0; 
}