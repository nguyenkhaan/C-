//Tao mot danh sach lien ket. Cap phat dong va nhap du lieu cho vector, dua du lieu do vao DSLK 
//Nhap vao gia tri x va pos, chen no vo giua 
#include <stdio.h> 
#include <iostream>
#include <bits/stdc++.h>
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
void pushBack(node *&head, int x) 
{
    node *Newnode = makeNode(x); 
    if (head == NULL) 
    {
        head = Newnode; return; 
    }
    node *temp = head; 
    while (temp->next !=NULL) temp = temp->next; 
    temp->next = Newnode; 
}
void loop(node *head) 
{
    while (head!=NULL) 
    {
        cout<<head->data<<"  "; 
        head = head->next; 
    }
}
int main() 
{
    vector<int> *a = new vector<int>; 
    int n; cin>>n; 
    node *head = NULL; 
    int x; 
    for (int i=0; i<n; i++) 
    {
        cin>>x; 
        pushBack(head,x);
    }
    loop(head); 
    return 0; 

}