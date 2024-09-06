/*
1. Thêm sinh viên: ten, ma ID, gpa.
2. Truy xuất thông tin sinh viên theo ID 
3. Tính điểm trung binh gpa của cả lớp 
*/
#include <iostream>
#include <string> 
#include <bits/stdc++.h>
using namespace std; 
struct sinhvien 
{
    string name; 
    float gpa; 
    string id; 
    
};
//Một node của Linked list 
struct node
{
    sinhvien sv; 
    node *next; 
};
map<string,sinhvien> Search;
//Cập nhật sinh viên vào map 
void Update(string name, string id, float gpa) 
{
    //sinhvien x(name,id,gpa); 
    sinhvien x;
    x.name = name; 
    x.id = id; 
    x.gpa = gpa; 
    Search.insert({id,x}); 
}
//In ra dữ liệu sinh viên
void incauhinh(sinhvien x) 
{
    cout<<"Ho va ten: "<<x.name<<endl; 
    cout<<"gpa: "<<x.gpa<<endl; 
}
//Tìm kiếm thông tin sinh viên 
void search(string ID) 
{
    if (Search.find(ID) == Search.end()) cout<<"Khong co thong tin..."; 
    else incauhinh(Search[ID]);
}
//Tao một node của Linked List 
node *makeNode() 
{
    node *Newnode = new node(); 
    string name; 
    float gpa; 
    string id; 
    cout<<"Nhap id: "; cin>>id; 
    Newnode->sv.id = id; 
    cin.ignore(); 
    cout<<"Nhap ho va ten: "; getline(std::cin,name); 
    Newnode->sv.name = name; 
    cout<<"Nhap gpa: "; cin>>gpa; 
    Newnode->sv.gpa = gpa; 
    Update(name,id,gpa); 
    return Newnode; 
}
//Thêm node vào DSLK
void pushBack(node *&head) 
{
    node *newNode = makeNode(); 
    if (head == NULL) 
    {
        head = newNode; 
        return; 
    }
    node *temp = head; 
    while (temp->next != NULL) temp = temp->next; 
    temp->next = newNode; 
}
//Tạo lựa chọn
int _Yourchoice() 
{
    int choice; 
    cout<<"1. Cap nhat thong tin"<<endl; 
    cout<<"2. Truy xuat thong tin "<<endl; 
    cout<<"3. Tinh diem trung binh"<<endl; 
    cout<<"Moi nhap lua chon cua ban: "; cin>>choice; 
    return choice; 
}
float avarage(node *&head) 
{
    float k; int d = 0;
    node *temp = head; 
    while (temp!=NULL) 
    {
        k+=temp->sv.gpa; 
        d++; 
        temp = temp->next; 
    }
    return (k/d)*1.0; 
}
int main() 
{
    int choice = 1;
    node *head = NULL;  
    
    while (choice != 0) 
    {
        choice = _Yourchoice(); 
        switch (choice)
        {
        case 1:
            pushBack(head); 
            break;
        case 2: 
            string ID; 
            cout<<"Nhap ID: "; cin>>ID;
            search(ID); 
            break; 
        }
        case 3: 
            float Diem_Average = avarage(head); 
            cout<<Diem_Average; 
    }
}