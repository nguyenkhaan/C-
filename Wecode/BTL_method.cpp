#include <bits/stdc++.h>
#include "BTL.h"
using namespace std;
#define For(m,n,p) for(m = n; m < p; ++m) 
#define str string 
vector<str> split(str &s, char definder) 
{
    str temp = ""; 
    vector<str> ans; 
    s += str(1,definder); 
    For(i,0,s.size())
    {
        if (s[i] != definder) temp += str(1,s[i]); 
        else {
            ans.push_back(temp); 
            temp = ""; 
        }
    }
    return ans; 
}
void _delete(str &s, char ch) 
{
    int pos; 
    while ((pos = s.find(ch)) != -1) s.erase(pos,1); 
}
void trim(str &s) {
    while (s[0] == ' ') s.erase(0,1); 
    while (s[s.size() - 1] == ' ') s.erase(s.size() - 1,1); 
}
void standard(str &s) 
{
    trim(s); 
    _delete(s,')'); 
    _delete(s,'('); 
}
void make(vector<str> &lst, int &n, bool flag)
{
    ++n; 
    For(i,0,lst.size()) standard(lst[i]);
    if (!flag) 
        For(i,0,lst.size())
            if (i % 2 == 0) a[n-1].point[i/2].x = stod(lst[i]); 
            else a[n-1].point[i/2].y = stod(lst[i]); 
    else {
        b[n-1].point.x = stod(lst[0]); 
        b[n-1].point.y = stod(lst[1]);
        b[n-1].r = stod(lst[2]);  
    } 
}
void my_main(ifstream &f, int &n1, int &n2) 
{
    str s;
    while (getline(f,s)) 
    {
        str s1 = s.substr(5,s.size() - 6); 
        vector<str> lst = split(s1,','); 
        if (s[1] == '0') make(lst,n1,0); 
        else make(lst,n2,1); 
    } 
}
