#include <iostream> 
#include <string> 
using namespace std; 
struct node
{
    int data; 
    node *next; 
    //Con tro kieu node de luu dma chi cua 1 node khac   
    //Not cuoi cung cua DSLK thi ncon tro do la NULL 
};
node *makeNode(int x) 
{
    node *newNode = new node(); //Cap phat dong cho mot node 
    newNode->data = x; 
    newNode->next = NULL; 
    return newNode; 
}
void duyet(node *head) //Thang quan li dau tien trong danh sach lien ket 
{
    while (head!=NULL) //Khi chua gap con tro NULL 
    {
        cout<<head->data<<"   "; 
        head = head->next; 
    }
}
int cout(node *head) 
{
    int d = 0; 
    while (head!=NULL) 
    {
        d++; 
        head = head->next; 
    }
    return d; 
}
void push_Front(node **head, int x) 
{
    node *newNode = makeNode(x); 
    
}
int main() 
{
    /*
    Danh sách liên kết: DS liên kết đơn, đôi, vòng 
    Dùng để lưu trữ các phần tử 
    1. Có thể mở rộng và thu hẹp linh hoạt 
    2. Các phần tử gọi là Node được cấp phát động 
    3. Ptu cuối trỏ vào NULL //Phan biet voi ki tu null 
    4. Là CTDL cấp phát động 
    5. Có 2 phần: Data và Link 
    */
    //Them 1 node vao dau danh sach lien ket 
}