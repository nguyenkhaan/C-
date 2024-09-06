#include <iostream> 
#include <stdio.h> 
using namespace std; 
int n,m; 
int ans; 
void binary_search(int a[], int l, int r)
{
    if (l<r) 
    {
        int mid = (l+r)/2; 
        int M = 0; 
        for (int i=1; i<=n; i++) M += mid / a[i];  
        if (M >= m) 
        {
            ans = mid;
            binary_search(a,l,mid); 
        } 
        if (M<m) binary_search(a,mid+1,r); 
    }
}
int main() 
{
    cin>>n>>m; 
    int a[1000]; 
    for (int i=1; i<=n; i++) 
    {
        cin>>a[i]; 
    }
    binary_search(a,1,1000); 
    cout<<ans; 
}