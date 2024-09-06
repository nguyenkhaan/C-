#include <iostream> 
#include <stdio.h>
#include <bits/stdc++.h>
#include <stdbool.h>
using namespace std; 
map<pair<int,int>,int> mp; 
int n; 
void two_sum(int a[], int target) 
{
    bool check = 0;
    for (int i=0; i<n; i++) 
    {
        int x = a[i]; 
        int y = target - a[i]; 
        mp[make_pair(x,y)] = i; 
        if (mp.find(make_pair(y,x)) != mp.end()) 
        {
            cout<<i<<"   "<<mp[make_pair(y,x)]; 
            check = 1; 
            break; 
        }
    }
    if (check == 0) cout<<"-2"; 
}
int main() 
{
    cin>>n; 
    int a[1000]; 
    int b[1000]; 
    int target; 
    auto nhap = [&]()
    {
        for (int i=0; i<n; i++) cin>>a[i]; 
        cout<<"Nhap target: "; 
        cin>>target; 
    };
    nhap();
    two_sum(a,target); 
}