#include <bits/stdc++.h>
using namespace std; 
struct node 
{
    node *right = NULL;
    node *left = NULL; 
    int data; 
    node(int x)
    {
        this->data = x; 
        this->left = nullptr; 
        this->right = NULL; 
    }
}; 
node *t = NULL; 
void make_node(node* &t, int x) 
{
    if (t == NULL) 
    {
        node p = new node(x); 
        t = p; 
    }
    if (t->data > x) make_node(t->left,x); 
    else make_node(t->right,x); 
}
void lnr(node *t, int x) 
{
    if (lnr(t->left,x)) return true; 
    if (t->data == x) return true; 
    if (lnr(t->right,x)) return true; 
    return false; 
}
void _find(int x) 
{
    if (lnr(t,x)) cout<<"Co"; 
    else cout<<"Khong"; 
}
int main() 
{

}