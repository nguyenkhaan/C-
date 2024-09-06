#include <stdio.h> 
#include <iostream> 
using namespace std; 
struct node 
{
    int data; 
    node *next; 
}; 
node *makeNode(int x)
{
    node *NewNode = new node({x,NULL}); 
    return NewNode; 
}
/*
Xem node dau tien trong DSLK tuong ung voi dinh cua ngan xep 
push: Them 1 phan tu vao dinh ngan xep = them 1 node vao dau cua danh sach lien ket
pop: xoa 1 phan tu o dau 
top: In ra node dau tien trong danh sach lien ket 
*/
void push(node *&top, int x) 
{
    node *newNode = makeNode(x); 
    newNode->next = top; 
    top = newNode; 
}
void pop(node *&top) 
{
    if (top!=NULL)
    {
        node *temp = top; 
        top = top->next; 
        delete(temp); 
    }
}
int top(node *top) 
{
    if (top!=NULL) return top->data; 
    return -1; 
}
int size(node *&top) 
{
    int i = 0;
    while (top!=NULL) 
    {
        i++; 
        top = top->next; 
    }
    return i; 
}
void loop(node *top) 
{
    while (top!=NULL) 
    {
        cout<<top->data<<"  "; 
        top = top->next; 
    }
    cout<<endl; 
}
int main() 
{
     node *top = NULL; 
     cout<<"Qua trinh day phan tu vao ngan xep: "; 
     for (int i=1; i<=10; i++)
     {
        push(top,i); 
        loop(top); 
     }
     cout<<endl;
     cout<<"Qua trinh lay phan tu ra khoi ngan xep: "; 
     for (int i=1; i<=10; i++) 
     {
        loop(top); 
        pop(top); 

     }
}