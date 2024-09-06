#include <stdio.h> 
#include <iostream> 
using namespace std; 
struct node 
{
    int data; 
    node* next; 
}; 
node *makeNode(int x) 
{
    node *newNode = new node({x,NULL}); 
    return newNode; 
}
void push(node *&head,int x) //Them phan tu va cuoi danh sach lien ket 
{
    node *newNode = makeNode(x); 
    if (head == NULL) 
    {
        head = newNode; return; 
    }
    node *temp = head; 
    while (temp->next!=NULL) temp = temp->next;
    temp->next = newNode; 
}
