#include <stdio.h> 
#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
struct node 
{
    int sum = 0; 
}t[1000]; 
int n; 
int a[100]; 
void update(int pos, int val) 
{
    while (pos<=n) 
    {
        t[pos] += val; 
        pos += pos & (-pos); 
    }
}
long long get(int pos) 
{
    int ans = 0;
    while (pos) 
    {
        ans += t[pos].sum; 
        pos -= pos & (-pos); 
    }
    return ans; 
}
int main() 
{
    cin>>n; 
    for (int i=1; i<=n; i++) 
    {
        cin>>a[i]; 
    }
}