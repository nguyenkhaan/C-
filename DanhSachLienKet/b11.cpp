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
void pushFront(node *&head, int x) 
{
    node *NewNode = makeNode(x); 
    NewNode.next = head; 
    head = NewNode; 
}
void pushBack(node *&head, int x)
{
    node *NewNode = makeNode(x); 
    if (head == NULL) 
    {
        head = NewNode; 
        return; 
    }
    node *temp = head; 
    while (temp->next != NULL) temp = temp->next; 
    temp->next = NewNode; 
}
void sort(node *head) 
{
    auto swap = [&](int &x, int &y) 
    {
        int t = x; 
        x = y; 
        y = t; 
    }; 
    while (head!=NULL) 
    {
        node *minNode = head; 
        for (node *j = head->next; j!=NULL; j=j->next)
        {
            if (minNode->data > j->data) minNode->data = j->data;  
        }
        swap(minNode->data,head->data); 
        head = head->next; 
    }
}