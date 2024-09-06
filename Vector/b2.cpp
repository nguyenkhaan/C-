#include <iostream> 
#include <bits/stdc++.h> 
using namespace std; 
int main() 
{
    vector<int> v; 
    for (int i=1; i<=10; i++) v.push_back(i); 
    for (vector<int>::iterator it = v.begin(); it!=v.end(); it++) 
    {
        cout<<*it<<endl; //Check cach duyet phan tu bawng iterator 
    }
    v.pop_back(); 
    cout<<v.size()<<endl; 
    return 0;
}