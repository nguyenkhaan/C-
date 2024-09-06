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
    node *newNode = new node({x,NULL}); 
    return newNode; 
}
void loop(node *head) 
{
    while (head!=NULL) 
    {
        cout<<head->data<<"   "; 
        head = head->next; 
    }
}
void pushFront(node *&head, int x) 
{
    node *newNode = makeNode(x); 
    newNode->next = head; 
    head = newNode; 
}
void pushBack(node *&head, int x) 
{
    node *newNode = makeNode(x); 
    if (head == NULL) 
    {
        head = newNode; 
        return; 
    }
    node *temp = head; 
    while (temp->next!=NULL) temp = temp->next; 
    temp->next = newNode; 
}
void push(node *&head, int pos, int x) 
{
    node *newNode = makeNode(x); 
    if (head == NULL) 
    {
        head = newNode; 
        return; 
    }
    node *temp = head; 
    for (int i=0; i<pos-1; i++) temp = temp->next; 
    node *temp1 = temp->next; 
    temp->next = newNode; 
    newNode->next = temp1; 
}
void deleteFront(node *&head) 
{
    node *temp = head; 
    head = head->next; 
    delete(temp); 
}
void deleteBack(node *&head) 
{
    node *temp = head; 
    while (temp->next->next!=NULL) 
    {
        temp = temp->next; 
    }
    node *temp1 = temp->next->next; 
    temp->next = NULL; 
    delete(temp1); 
}
void _delete(node *&head, int pos) 
{
    node *temp = head; 
    for (int i=0; i<pos-1; i++) temp = temp->next; 
    node *temp1 = temp->next; //Xoa bo nho 
    node *temp2 = temp->next->next; //Tro vao phan tu ngay sau no 
    temp->next = temp2;  
    delete(temp1);
}
int main() 
{
    node *head = NULL; 
    for (int i=1; i<=10; i++) 
    {
        pushBack(head,i); 
    }
    _delete(head,5); 
    loop(head); 
    return 0;
}