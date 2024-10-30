#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    cout<<defaultfloat; 
    int n; 
    cin>>n; 
    double res1,res2,res3; 
    double t = 1,temp = 0; 
    for (int i = 1; i <= n; ++i) res1 += pow(i,i); 
    for (int i = 1; i <= n; ++i) 
    {
        t *= i; 
        res2 += t;  
    }
    for (int i = 1; i <= n; ++i) 
    {
        temp += i; 
        res3 += (1/temp); 
    }
    cout<<res1<<endl; 
    cout<<res2<<endl; 
    cout<<res3<<endl; 

}