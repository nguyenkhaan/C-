//Ta dung thuau toan Kanade de tim day con lien tiep co tong lon nhat 
#include <stdio.h> 
#include <iostream>
using namespace std; 
int main() 
{
    int n; cin>>n; 
    int a[1000]; 
    int maxSum = -1000; 
    int s = 0; 
    for (int i=0; i<n; i++) cin>>a[i]; 
    for (int i=0; i<n; i++) 
    {
        s+=a[i]; 
        if (maxSum<s) maxSum = s; 
        if (s<0) s = 0; 
    }
    cout<<maxSum; 
    
}