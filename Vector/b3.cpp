#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 
int main()
{
    vector<int> a; 
    int n; cin>>n; 
    for (int i=0; i<n; i++) 
    {
        int x; cin>>x; 
        a.push_back(x); 
    }
    int s = 0; 
    for (vector<int>::iterator b = a.begin(); b!=a.end(); b++) s+=*(b); 
    cout<<s<<endl; 
    return 0; 
}