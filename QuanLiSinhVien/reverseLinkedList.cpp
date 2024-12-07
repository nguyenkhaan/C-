#include <bits/stdc++.h>
using namespace std; 
struct Node 
{
    Node *next; 
    int data; 
    Node(int data) 
    {
        this->data = data; 
        this->next = NULL; 
    }
}; 
Node* reverse(Node *head) 
{
    Node *temp = head; 
    stack<Node*> st; 
    while (temp->next != NULL) 
    {
        st.push(temp); 
        temp = temp->next; 
    }
    //Lay con tro cuoi cung thanh con tro dau 
    head = temp; 
    while (!st.empty()) 
    {
        temp->next = st.top(); 
        st.pop(); 
        temp = temp->next; 
    }
    temp->next = NULL; 
    return head; 
}
void inNode(Node* head) 
{
    while (head != NULL) 
    {
        cout<<head->data<<endl; 
        head = head->next; 
    }
}
int main() 
{
    Node *head = new Node(1); 
    head->next = new Node(2); 
    head->next->next = new Node(3); 
    head->next->next->next = new Node(4); 
    head = reverse(head); 
    inNode(head); 
   
}