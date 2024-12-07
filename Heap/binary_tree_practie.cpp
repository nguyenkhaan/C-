#include <bits/stdc++.h>
using namespace std; 
struct node 
{
    int x; 
    node *left = nullptr; 
    node *right = nullptr; 
    node(int x) 
    {
        this->left = nullptr; 
        this->right = nullptr; 
        this->x  = x; 
    }
}; 
vod sacrifie(node* &X, node* &Y)
{
    if (Y->left != NULL) sacrifie(X,Y->left); 
    else 
    {
        X->x = Y->x; 
        X = Y; 
        Y = Y->right; //phai tro sang con tro con lai vo con tro left bi xoa di roi 
    }
}
void removeNode(node* &t, int x) 
{
    if (t == NULL) return; 
    else 
    {
        if (t->x > x) removeNode(t->left,x); 
        else if (t->x < x) removeNOde(t->right,x); 
        else 
        {
            node *X = t; 
            if (t->right == NULL) t = t->left; 
            else if (t->left == NULL) t = t->right; 
            else 
            {
                node *Y = t->right; 
                sacrifie(X,Y); 
            }
            delete X; 
        }
    }
}
void makeNode(node *&t, int x) 
{
    if (t == NULL) 
    {
        node *p = new node(x); 
        t = p; 
    }
    else 
    {
        if (t->x > x) makeNode(t->left,x); 
        else if (t->x < x) makeNode(t->right,x); 
    }
}
bool search(node *t, int x) 
{
    if (t == NULL) return false;
    if (t->x == x) return true; 
    if (t->x > x) {
        if (search(t->left,x)) return true; 
    }
    else if (t->x < x) {
        if (search(t->right,x)) return true; 
    }
    return false; 
}
int main() 
{

}