#include <bits/sdtd
using namespace std; 
int a[100][100],prefix[100][100]; 
void nhap() 
{
    for (int i=0; i<n; i++) 
    {
        for (int j=0; j<n; j++) cin>>a[i][j]; 
    }
}
void Prefix() 
{
    prefix[0][0] = a[0][0]; 
    for (int i=1; i<n; i++) 
    {
        prefix[0][i] = prefix[0][i-1] + a[0][i]; 
        prefix[i][0] = prefix[i-1][0] + a[i][0]; 
    }
    for (int i=1; i<n; i++) 
    {
        for (int j=1; j<n; j++) prefix[i][j] = prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1]+a[i][j]; 
    }
}
int main() 
{
    nhap(); 
    Prefix(); 
    int x1,y1,x2,y2; 
    cin>>x1>>y1>>x2>>y2; 
    int sum = prefix[x2][y2] - prefix[x1-1][y2] - prefix[x2][y1-1] + prefix[x1-1][y1-1]; 
    cout<<sum; 
}