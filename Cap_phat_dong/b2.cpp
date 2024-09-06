#include <iostream> 
#include <stdio.h> 
#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    vector<set<int>> v; 
    set<int> s1; 
    s1.insert(10); 
    s1.insert(20); 
    v.push_back(s1); 
    s1.clear(); 
    s1.insert(30); 
    s1.insert(40); 
    v.push_back(s1); 
    vector<set<int>>:: iterator p = v.begin(); 
    p->insert(100);
    auto p1 = p->begin();
}