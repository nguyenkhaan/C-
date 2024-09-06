#include <iostream> 
#include <stdio.h>
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
void loop(node *head) 
{
    while (head!=NULL) 
    {
        cout<<head->data<<"   "; 
        head = head->next; 
    }
}
void pushBack(node *&head, int x) 
{
    node *temp = head; 
    node *newNode = makeNode(x); 
    if (head == NULL) 
    {
        head = newNode; return; 
    }
    while (temp->next != NULL) 
    {
        temp = temp->next; 
    }
    temp->next = newNode; //Cap nhat gia tri cho next 
}
int main() 
{
    node *head = NULL; 
    for (int i=1; i<=5; i++) 
    {
        pushBack(head,i); 
    }
    loop(head); 
}