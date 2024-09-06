#include <iostream> 
#include <bits/stdc++.h> 
using namespace std; 
int n,prime[1000]; 
vector<int> x;  
void sang_nguyen_to() 
{
    for (int i=2; i<=n; i++) prime[i] = 1; 
    for (int i=2; i*i<=n; i++) 
    {
        if (prime[i] == 1) 
        {
            for (int j = i*i; j<=n; j+=i) prime[j] = 0;
        }
    }
    for (int i=2; i<=n; i++) if (prime[i] == 1) 
    {
        x.push_back(i); 
    }
} 
int main() 
{
    cin>>n; 
    sang_nguyen_to(); 
    int j = x.size()-1; 
    while (n != 1) 
    {
        if (n%x[j] !=0) j--; 
        else 
        {
            cout<<x[j]<<"  "; 
            n /= x[j]; 
        } 
    }
}