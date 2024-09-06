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
    node *newNode = new node({x,NULL; 
    return newNode; 
}
//Duyệt phần tử trong Danh sách liên kết 
void loop(node *head) 
{
    while (head!=NULL) 
    {
        cout<<head->data<<"  "; 
        head = head->next; 
    }
}
void push_front(node **head, int x) //Khoi tao mot con tro luu tru dia chi cua con tro head
{
    node *newNode = makeNode(x); 
    newNode->next = *head; 
    *head = newNode; 
}
void push_front2(node *&head, int x) 
{
    node *newNode = makeNode(x); 
    newNode->next = head; 
    head = newNode; 
}
int main() 
{
    node *head = NULL; 
    for (int i=1; i<=5; i++) 
    {
        push_front(&head,i); 
    }
    loop(head); 
}