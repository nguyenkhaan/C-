#include <iostream> 
#include <bits/stdc++.h>
using namespace std; 
int main() 
{
    //pair: Dung de luu cac cap du lieu 
    //pair<datatype1,datatype2> v(n1,n2)
    pair<int,int> v(100,200); 
    //pair<long,long> v; 
    //pair<string,int> v; 
    //pair co 2 phan la first va second 
    vector<pair<int,int>> a; //Ket hop giua pair va vector 
    tuple<int,int,int> t(1,2,3); 
    cout<<get<1>(t)<<endl; 
    a.push_back();
    
    return 0; 


}