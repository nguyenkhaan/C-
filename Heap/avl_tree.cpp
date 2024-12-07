#include <bits/stdc++.h>
using namespace std; 
struct node 
{
    node* right = NULL; 
    node* left = NULL; 
    int data; 
    int height = 0; 
    node(int x) 
    {
        this->data = x; 
        this->left = NULL; 
        this->right = NULL; 
        height = 1; 
    }
}; 
typedef node* tree; 
tree t = NULL; 
int height(tree t) 
{
    return (t == NULL)?0 : t->height; 
} 
int balanceFactor(tree t) 
{
    return (t == NULL)?0 : height(t->left) - height(t->right); 
}
void leftRotation(tree &t) 
{
    tree x = t->right; 
    tree y = x->left; 
    x->left = t; 
    t->right = y; 
    x->height = max(height(x->left) , height(x->right)) + 1; 
    t->height = max(height(t->left) , height(t->right)) + 1; 
    y->height = max(height(y->left) , height(y->right)) + 1; 
    t = x; 
} 
void rightRotation(tree &t) 
{
    tree x = t->left; 
    tree y = x->right; 
    x->right = t; 
    t->left = y; 
    x->height = max(height(x->left) , height(x->right)) + 1; 
    t->height = max(height(t->left) , height(t->right)) + 1; 
    y->height = max(height(y->left) , height(y->right)) + 1; 
    t = x; 

}
void balance(tree &t) 
{
    int ba = balanceFactor(t); 
    if (ba > 1) 
    {
        if (balanceFactor(t->left) >= 0) rightRotation(t); 
        else if (balanceFactor(t->left) < 0) {
            leftRotation(t->left); 
            rightRotation(t); 
        }
    }
    else if (ba < 1) 
    {
        if (balanceFactor(t->right) <= 0)  leftRotation(t); 
        else if (balanceFactor(t->right) > 0) {
            rightRotation(t->right); 
            leftRotation(t); 
        }
    }
}
void makeNode(tree &t, int x) 
{
    if (t == NULL) {
        tree p = new node(x); 
        t = p;
    }
    else 
    {
        if (t->data > x) makeNode(t->left,x); 
        else if (t->data < x) makeNde(t->right,x); 
    }
    balance(t); 
}
void lnr(tree t) {
    lnr(t->left); 
    cout<<t->data; 
    lnr(t->right); 
}
void menu() 
{
    while (true) 
    {
        cout<<"1. Them node"<<endl; 
        cout<<"2. In cay"<<endl; 
        int option; 
        cin >> option; 
        if (!option) break; 
        if (option == 1)
        {
            int x; 
            cin >> x; 
            makeNode(t,x); 
        } 
        else lnr(t); 
    }
}
int main() 
{
    menu(); 
}