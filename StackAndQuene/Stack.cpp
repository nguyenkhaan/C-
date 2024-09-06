#include <bits/stdc++.h>
#include <stack>
using namespace std; 
//push top size empty O(1) 
int main() 
{
    //Stack: thêm 1 phần tử (push) và lấy phần tử khỏi stack (pop) 
    stack<int> st; 
    st.push(1); 
    st.push(2); 
    st.push(3); 
    st.pop(); 
    cout<<st.empty(); 
}