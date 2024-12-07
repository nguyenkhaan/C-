//Viet chuong trinh tao 1 cay nhi phan chua cac so nguyen to. Tim cac so nguyen to tren cay nhi phan do 
#include <bits/stdc++.h>
using namespace std; 
struct node 
{
    node *left; 
    node *right; 
    int x; 
    node (int x) 
    {
        this->x = x; 
        this->left = NULL; 
        this->right = NULL; 
    }
}; 
node *t = NULL; 
void makeNode(node* &t, int x) 
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
vector<int> vec; 
bool prime(int n) 
{
    if (n < 2) return false; 
    for (int i = 2; i*i <= n; ++i) if (n % i == 0) return false; 
    return true; 
}
void lnr(node *t) 
{
    if (t != NULL) 
    {
        lnr(t->left); 
        if (prime(t->x)) vec.push_back(t->x); 
        lnr(t->right); 
    }
}
void menu() 
{
    while (true) 
    {
        cout<<"1. Them node"<<endl; 
        cout<<"2. In ket qua"<<endl; 
        int option; 
        cin >> option; 
        if (!option) break; 
        if (option == 1) {
            int x; 
            cin >> x; 
            makeNode(t,x); 
        }
        if (option == 2) {
            lnr(t); 
            for (auto x : vec) cout<<x<<" "; 
            cout<<endl; 
        }
    }
}
int main() 
{
    menu(); 
}