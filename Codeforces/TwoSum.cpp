#include <stdio.h> 
#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 
unordered_map<int,int> mp1; 
unordered_map<int,int> mp2; 
void nhap(vector<int> (&a)[2], int n, int m, int target)
{
    cout<<"Nhap gia tri cho mang so 1: "; 
    for (int i=0; i<n; i++) 
    {
        int x; cin>>x; 
        a[0].push_back(x); 
        mp1[target-x] = i; //Luu lai vi tri va target 
    }
    cout<<"Nhap gia tri cho mang so 2: "; 
    for (int i=0; i<m; i++) 
    {
        int x; cin>>x; 
        a[1].push_back(x);
        mp2[x] = i; 
    }
}
pair<int,int> Two_Sum()
{
    pair<int,int> x;
    x.first = -1; x.second = -1;  
    for (pair<int,int> k:mp1) 
    {
        if (mp2.find(k.first) != mp2.end())
        {
            x.first = k.second; //Lay gia tri vi tri dau tien 
            x.second = mp2[k.first]; 
        }
    }
    return x; 
}
int main() 
{
    vector<int> a[2]; 
    cout<<"Nhap so gia tri cho mang 1 va mang 2: "; 
    int m,n; cin>>n>>m;
    int target;
    cin>>target; 
    nhap(a,n,m,target);
    pair<int,int> p = Two_Sum(); 
    cout<<p.first<<"   "<<p.second; 
    return 0;


}