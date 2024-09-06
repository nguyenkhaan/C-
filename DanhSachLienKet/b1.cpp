//Khoi tao 5 node mang gia tri 1 2 3 4 5 
#include <stdio.h> 
#include <iostream> 
using namespace std; 
struct node
{
    int data; 
    node* next; //Con tro kieu node 
}; 
node *makeNode(int x) 
{
    node *newNode = new node(); 
    newNode->data  =x; 
    newNode->next = NULL; 
    return newNode; 
}
int main() 
{
    node *node1 = makeNode(1); 
    node *node2 = makeNode(2); 
    node *node3 = makeNode(3); 
    node *node4 = makeNode(4); 
    node *node5 = makeNode(5); 
}

