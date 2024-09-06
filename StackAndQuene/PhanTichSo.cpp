//Cho mot S va mot so T. Hay tim so thao tac it nhat de bien doi so S thanh so T
//(a): nhan S len 2 
//(b): nhan S len 1 
#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    int s,t; 
    cin>>s>>t; 
    queue<pair<int,int>> q; 
    q.push(make_pair(s,0)); 
    cout<<q.front().first; 
    set<int> filter;
    pair<int,int> ans; 
    while (true) 
    {
        pair<int,int> num = q.front(); 
        q.pop(); 
        if (num.first == t) 
        {
            ans = num; 
            break; 
        }
        if ((filter.find(num.first*2) == filter.end()) && (num.first>=1))
        {
            filter.insert(num.first*2); 
            q.push(make_pair(num.first*2,num.second+1));
        }
        if ((filter.find(num.first +1) == filter.end()) && (num.first>=1))
        {
            filter.insert(num.first + 1); 
            q.push(make_pair(num.first + 1, num.second + 1)); 
        }
    }
    cout<<ans.second;
}