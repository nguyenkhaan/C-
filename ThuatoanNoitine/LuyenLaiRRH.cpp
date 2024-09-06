#include <stdio.h> 
#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
int n; 
vector<int> tao_mang_nen(int a[]) 
{
    set<int> s; 
    for (int i=0; i<n; i++) s.insert(a[i]); 
    vector<int> v(s.begin(),s.end()); 
    return v; 
}
vector<int> nen_mang(int a[] ) 
{
    vector<int> b(n); 
    int pos[1000]; 
    for (int i=0; i<n; i++) pos[i] = i;
    auto swap = [&](int &x, int &y)
    {
        int t = x; 
        x = y; 
        y = t; 
    }; 
    //Cocktail Sort
    auto cocktailsort = [&]()
    {
        int l = 0; 
        int r = n-1; 
        while (l<r) 
        {
            for (int i=l; i<=r-1; i++) if (a[i]>a[i+1]) 
            {
                swap(a[i],a[i+1]);
                swap(pos[i],pos[i+1]); 
            } 
            r--; 
            for (int i = r; i>=l+1; i--) if (a[i]<a[i-1]) 
            {
                swap(a[i],a[i-1]);
                swap(pos[i],pos[i+1]); 
            } 
            l++;
        }
    }; 
    cocktailsort(); 
    int d = 0; 
    int last = -1;  
    for (int i=0; i<n; i++) 
    {
        if (last!=a[i]) 
        {
            d++; 
            last = a[i]; 
        }
        b[pos[i]] = d; 
    }
    return b; 
    
}
int main() 
{
    cin>>n; 
    int *a = new int[1000]; 
    for (int i=0; i<n; i++) cin>>a[i]; 
    vector<int> c = tao_mang_nen(a);
    vector<int> b = nen_mang(a); 
}