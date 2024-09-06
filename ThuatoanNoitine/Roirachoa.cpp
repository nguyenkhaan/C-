/* 
Phương pháp này chủ yếu để làm giảm giá trị lưu trữ và truy cập nhanh hơn cho mảng 
Vd: mảng a = {100,2000,100,90000}
Mảng đã nén: 1 2 1 3 -> đảm bảo thứ tự lớn bé 
Mảng nén: 100 2000 90000 -> chứa các số đã nén 
*/
#include <stdio.h> 
#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
int n; 
vector<int> tao_nen_mang(int a[]) 
{
    set<int> s; 
    for (int i=0; i<n; i++) s.insert(a[i]); 
    vector<int> v(s.begin(), s.end()); //Mang chua cac phan tu de nen 
    return v;
}
vector<int> nen_mang(int a[]) 
{
    int pos[1000]; 
    for (int i=0; i<n; i++) pos[i] = i; 
    vector<int> b(n); 
    auto swap = [&](int &x, int &y) 
    {
        int t =x; 
        x = y; 
        y =t; 
    };
    for (int i=0; i<n; i++) 
    {
        int min = i; 
        for (int j = i+1; j<n; j++) if (a[min]>a[j]) min = j; 
        swap(a[i],a[min]); 
        swap(pos[i],pos[min]); 
    }
    int last = a[n]; 
    int d = 0; 
    for (int i=0; i<n; i++) 
    {
        if (last != a[i]) 
        {
            last = a[i]; 
            d++; 
        }
        b[pos[i]] = d; 
    }
    return b; 
}
int main() 
{
    cin>>n; 
    int *a = new int[1000]; 
    for (int i=0; i<n; i++) cin>>a[i]; 
    vector<int> c = tao_nen_mang(a); 
    vector<int> b = nen_mang(a); 
    cout<<"Cac phan tu nen la: "; 
    for (int i:c) cout<<i<<"  "; 
    cout<<"Danh sach mang sau khi nen: "; 
    for (int i:b) cout<<i<<"   "; 
}
