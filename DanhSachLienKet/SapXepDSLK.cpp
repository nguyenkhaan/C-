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
void pushFront(node *&head, int x) 
{
    node *newNode = makeNode(x); 
    newNode->next = head; 
    head = newNode; 
}
void sort(node *head) 
{
    auto swap = [&](int &x, int &y) {int t = x; x = y; y = t;};
    for (node *i = head; i!=NULL; i=i->next) 
    {
        node *minNode = i; 
        for (node *j = i->next; j!=NULL; j=j->next) 
        {
            if (minNode->data > j->data) minNode = j; 
        }
        swap(i->data, minNode->data); 
    }
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
    node *head = NULL; 
    vector<int> a; 
    int x; 
    for (int i=0; i<8; i++) 
    {
        cin>>x; 
        a.push_back(x); 
    }
    for (int i=0; i<a.size(); i++) pushFront(head,a[i]); 
    sort(head); 
    loop(head); 


}