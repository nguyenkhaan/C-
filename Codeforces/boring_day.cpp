#include <stdio.h> 
#include <iostream> 
#include <bits/stdc++.h>
#include <stdbool.h>
typedef long long int lli; 
typedef long int li; 
using namespace std; 
int main() 
{
    li t; 
    cin>>t; 
    for (li j=0; j<t; j++) 
    {
    li n;  lli l,r; 
    pair<lli,lli> m; 
    cin>>n>>l>>r; 
    lli d = 0; 
    lli s = 0;//Khoi tao bien tong 
    vector<lli> a; 
    int i;  
    for (li i=0; i<n; i++) 
    {
        lli x; cin>>x; 
        a.push_back(x); 
    }
    m.first = 0; 
    m.second = a.size(); 
    while (m.first<m.second) 
    {
        lli s = 0; 
        bool t = false; 
        for (li i=m.first; i<m.second; i++) 
        {
            s+=a[i]; 
            if ((s>=l) && (s<=r)) {t=true; d++;  m.first = i+1; break; }
            if (s>r) {t=false; break;}
        }
        if (s<l) break; 
        if (t==false) 
        {
            while (s>r) {s-=a[m.first]; m.first++; }
        }
    }
    cout<<d<<endl; 
    }
    return 0; 
}