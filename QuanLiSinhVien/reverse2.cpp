#include <bits/stdc++.h>
using namespace std;  
struct Node 
{
    int data; 
    Node *next; 
    Node(int data) 
    {
        this->data = data; 
        this->next = NULL; 
    }
}; 
Node* reverse(Node *head) 
{
    Node *prev = NULL; 
    Node *curr = head; 
    while (curr != NULL) 
    {
        Node *temp = curr->next; 
        curr->next = prev; 
        prev = curr; 
        curr = temp; 
    }
    return prev; 
}
void inNode(Node *head) 
{
    while (head != NULL) 
    {
        cout<<head->data<<" ";  
        head = head->next; 
    }
}
int main() 
{
    Node *head = new Node(1); 
    head->next = new Node(2); 
    head->next->next = new Node(3); 
    
    head = reverse(head); 
    inNode(head); 
}