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
        cout<<head->data<<"  "; 
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
    node *NewNode = makeNode(x); 
    if (head == NULL) 
    {
        head = NewNode; return ; 
    }
    node *temp = head; 
    while (temp->next!=NULL) temp = temp->next; 
    temp->next = NewNode;
}
void push(node *&head, int pos, int x) 
{
    node *NewNode = makeNode(x); 
    if (head == NULL) 
    {
        head = NewNode; 
        return; 
    }
    int i = 0; 
    node *temp = head; 
    for (int i=0; i<pos-1; i++) temp = temp->next; 
    node *temp1 = temp->next; 
    temp->next = NewNode; 
    NewNode->next = temp1; 
}
int main() 
{
    node *head = NULL; 
    for (int i=1; i<=10; i++) 
    {
        pushBack(head,i); 
    }
    push(head,5,5); 
    loop(head);

}