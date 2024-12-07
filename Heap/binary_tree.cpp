#include <bits/stdc++.h>
using namespace std; 
//Nhập vào cây nhị phân các số ngyên. Xuất ra màn hình các phần tử của cây nhị phân 
//khai báo cấu trúc 1 node 
/*
- NULL chỉ có thể dùng cho con trỏ cho nên trong C++, ta phải dùng con trỏ để xây 
dựng các CTDL cây, linked list còn trong các nnlt khác js, python thì null có 
thể dùng như 1 value của 1 KDL -> ta không cần con trỏ để xây dựng mà bản chất là 
truyền tham chiếu 

- Con trỏ cũng chiếm 1 vùng nhớ và trỏ tới 1 vùng nhớ chứa dữ liệu => dùng -> để truy cập dữ liệu 
của vùng nhớ đó 
- Phép gán con trỏ p = a chính là cho 2 con trỏ cùng trỏ tới 1 vùng nhớ 

*/
struct node 
{
    int val; 
    node *left; 
    node *right; 
}; 
typedef node* tree; 
//khoi tao cay 
//gan t = NULL la duoc 
//them phan tu x vao cay nhi phan 
void add_node(tree &t, int x) 
{
    if (t == NULL) { //base case cua de quy
        node *p = new node(); 
        p->val = x; 
        p->left = NULL; 
        p->right = NULL; 
        t = p; 
    }
    else 
    {
        if (t->val > x) add_node(t->left,x); //o day thay doi la thay doi cai t->left, khong doi cai t de con duyet 
        else if (t->val < x) add_node(t->right,x);  //cac phan tu khong duoc trung nhau 
    }
}
void nlr(tree t) 
{
    if (t != NULL) 
    {
        cout<<t->val; 
        nlr(t->left); 
        nlr(t->right); 
    }
}
void sacrifie(tree &X, tree &Y) 
{
    if (Y->right == nullptr) sacrifie(X,Y->right); 
    else 
    {
        X->val = Y->val; 
        X = Y; 
        Y = Y->left; 
    }
}
void removeNode(tree &t, int x)
{
    if (t == NULL) return; //khong co gia tri de xoa 
    else 
    {
        if (t->val > x) removeNode(t->left,x); 
        else if (t->val < x) removeNode(t->right,x); 
        else 
        {
            node *X = t; //tro toi vung nho ma con tro t tro trc do 
            if (t->right == NULL) t = t->left; 
            else if (t->left == NULL) t = t->right; 
            else //node co 2 con 
            {
                node *Y = t->left;  
                sacrifie(X,Y); 
            }
            delete X; //xóa vùng nhớ mà con trỏ đó đã trỏ tới 
        }
    }
}
//ham nhap du lieu 
void menu(tree &t) 
{
    while (true) 
    {
        cout<<"*******************MENU***********************"<<endl; 
        cout<<"1. Nhap du lieu"; 
        cout<<"\n2. Xuat cay\n"; //NLR , NRL , LNR , RNL,
        cout<<"3. Xoa node\n"; 
        int option; 
        cin >> option; 
        if (option == 1) {
            int x; 
            cin >> x; 
            add_node(t,x); 
        }
        if (option == 2) nlr(t); 
        if (option == 3) 
        {
            int x; 
            cin >> x; 
            removeNode(t,x); 
        }
        if (option == 0) break; 
    }  
}

int main() 
{
    tree t; 
    t = NULL; 
    menu(t); 

}