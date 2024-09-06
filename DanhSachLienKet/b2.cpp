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
        head = newNode; return; 
    }
    node *temp = head; 
    while (temp->next != NULL) temp = temp->next; 
    temp->next = newNode; 
}
void loop(node *head) 
{
    while (head != NULL) 
    {
        cout<<head->data<<"   "; 
        head = head->next; 
    }
}
void DeleteFront(node *&head) 
{
    node *temp = head; 
    head = head->next; 
    delete(temp); 
}
void DeleteBack(node *&head) 
{
    node *temp = head; 
    while (temp->next->next != NULL) temp = temp->next; 
    node *temp2 = temp->next; 
    temp->next = NULL; 
    delete(temp2); 
}
int main() 
{
    node *head = NULL; 
    for (int i=1; i<=10; i++) 
    {
        pushBack(head,i); 
    }
    loop(head); 
    return 0; 
}
