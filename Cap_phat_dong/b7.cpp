//Cap phat dong cho 1 vector co chua phan tu set 
//Luu vao vo 
#include <stdio.h> 
#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    vector<set<int>> *v = new vector<set<int>>; 
    //Them 1 la vao cay du lieu 
    set<int> s; 
    v->push_back(s);  
    int n;  cin>>n; 
    for (int i=0; i<n; i++) 
    {
        int x; cin>>x; 
        v->begin()->insert(x); 
    }
    auto p = v->begin(); 
    auto p1 = p->begin(); 
    n = p->size(); 
    for (int i=0; i<n; i++)
    {
        cout<<*p1; 
        advance(p1,1); 
    }
    delete v; 
}
