#include <stdio.h>
#include <iostream> 
#include <map> 
#include <set>
using namespace std; 
//cout 
//find: Tim kiem gia tri value trong map 
//insert: them phan tu vao map 
//erase: xoa key - value trong map 
int main() 
{
     //Collection co thu tu va luu tru theo key - value 
     //Các phương thức chính 
     /*
     1. Thêm một cặp key - value 
     2. Truy xuất value thông qua khóa \
     3. Xoas cặp key- value khỏi Map 
     Cac phan tu trong map dowc sap xep tang theo theo key 
     */
    //map<datatype 1, datatype2> mp; 
    map<int, int> mp; 
    mp[100] = 200; 
    //Thêm một cặp 100 -200 vào map 
    mp[200] = 300; 
    mp.insert({300,400}); 
    mp.insert({400,500}); 
    mp[100] = 300; 
    for (pair<int,int> x:mp) cout<<x.first<<"."<<x.second<<" ";  
    for (map<int, int>::iterator it = mp.begin();it!=mp.end();it++)
    cout<<(*it).first<<" "<<(*it).second<<endl; 
    if (mp.count(100)!=0)
    {
        cout<<"found"; 
    }
    else {
        cout<<"not find"; 
    }
    mp.erase(100); 
    for (pair<int,int> x:mp) cout<<x.first<<" "<<x.second<<endl; 
    //Dem so lan xuat hien cua cac phan tu trong mang 

    return 0; 


}