#include <stdio.h> 
#include <iostream>
using namespace std; 
void sang(int l, int r) 
{
    int prime[r+1]; 
    for (int i=2; i<r+1; i++) prime[i] = 1; 
    for (int i=2; i*i<r; i++) 
    {
        if (prime[i] == 1) 
        {
            for (int j = max(i*i,(l+i-1)/i*i); j<=r; j+=i) 
            {
                prime[j] = 0; 
            }
        }
    }
    int ans = 0; 
    for (int i=l; i<=r; i++) if (prime[i] == 1) ans++; 
    cout<<ans; 
}
int main() 
{
    
    int l,r; 
    cin>>l>>r; 
    sang(l,r); 
    
}