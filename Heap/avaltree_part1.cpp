/*
AVL 
- Cây nhị phân tìm kiếm 
- Mỗi node thì độ cao của cây con trái và cây con phải 
chênh lệch nhau không quá 1 
* Chỉ số cân bằng 
- Tại 1 node. Ta xét cây con bên trái và cây con bên phải 
+) Phải = trái: 0 
+) Trái > phải: -1 
+) Phải > trái: 1 
2. Các thao tác chính 
- Thêm node 
- Hủy 1 phần tử 
- Cân bằng (Rotation) 
3. Các trường hợp mất cân bằng 
- left of left 
- right of right 
- right of left 
- left of right 
- 
*/
#include <bits/stdc++.h>
using namespace std; 
struct node
{
    int val; 
    node *left = NULL; 
    node *right = NULL; 
    int height; 
    node(int x) 
    {
        this->val = x; 
        this->left = nullptr; 
        this->right = nullptr; 
        height = 1; 
    }
}; 
typedef node* tree; 
tree t = NULL; 
//1. Hai hàm cơ bản 
int height(tree t)  //tra ve chieu cao cua node hien tai 
{
    return (t == nullptr)? 0 : t->height; 
}
int balanceFactor(tree t)  //tinh balanceFactor cua node do 
{
    return (t == nullptr)? 0 : height(t->left) - height(t->right); 
}
//2. Hàm cơ bản quay 
void rightRotation(tree &t) 
{
    tree x = t->left; 
    tree y = x->right; 
    x->right = t; 
    t->left = y; 
    if (y) y->height = max(height(y->left) , height(y->right)) + 1; 
    if (x) x->height = max(height(x->left) , height(x->right)) + 1; 
    t = x; 
}
void leftRotation(tree &t) 
{
    tree x = t->right; 
    tree y = x->left;   //con trỏ trỏ tới vùng nhớ, vùng nhớ đó lại chứa con trỏ, con trỏ lại chiếm một vùng nhớ khác
    x->left = t; 
    t->right = y; //truy cập tới vùng nhớ mà con trỏ x trỏ tới 
    if (y) y->height = max(height(y->left) , height(y->right)) + 1; 
    if (x) x->height = max(height(x->left) , height(x->right)) + 1; 
    t = x;  
}
//3. Hàm cân bằng 
void balance(tree &t) 
{
    int ba = balanceFactor(t); 
    //>: lech trai, <: lech phai 
    if (ba > 1) 
    {
        //Minh di ve xet do lech cua cay con phia ben trai 
        if (balanceFactor(t->left) >= 0) rightRotation(t); 
        //cho >= 0 va >1 thi hoc thuoc di chu dung suy nghi 
        else
        {
            leftRotation(t->left); 
            rightRotation(t); 
        } 
    } 
    else if (ba < -1) 
    {
        //Di ve xet cay con ben phai 
        if (balanceFactor(t->right) <= 0) leftRotation(t); 
        else 
        {
            rightRotation(t->right); 
            leftRotation(t); 
        }
    }
}
//4. Các hàm thao tác 
void makeNode(tree &t, int x) 
{
    if (t == nullptr) 
    {
        tree p = new node(x); 
        t = p; 
    } 
    else 
    {
        if (t->val > x) makeNode(t->left,x); 
        else if (t->val < x) makeNode(t->right,x); 
    }
    t->height = max(height(t->left) , height(t->right)) + 1; 
    balance(t); 
}
int main() 
{
    makeNode(t,1); 
    makeNode(t,2); 
    makeNode(t,3); 
    makeNode(t,4); 
}