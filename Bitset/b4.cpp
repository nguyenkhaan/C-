#include <stdio.h> 
#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
int main() 
{   
    int n; 
    cin>>n; 
    int min = INT_MAX; 
    int max = 0; 
    int a[1000]; 
    for (int i=0; i<n; i++) 
    {
        cin>>a[i]; 
        if (min>a[i]) min = a[i]; 
        if (max<a[i]) max = a[i]; 
    }
    cout<<(min&max); 
}