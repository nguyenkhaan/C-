#include <bits/stdc++.h>
using namespace std; 
vector<int> LPS(string s) 
{
    int i = 1; 
    int len = 0; //do dai tien to hien tai 
    //xem len là 1 con trỏ, con trỏ i chạy trước con trỏ len 
    vector<int> lps(s.size()); 
    lps[0] = 0; 
    while (i < s.size()) 
    {
        if (s[i] == s[len]) {  //nếu cái con trỏ bằng với cái độ dài thì tiến hành cập nhập độ dài 
            ++len; 
            lps[i] = len; 
            ++i;  
        }
        else 
        {
            if (len != 0) len = lps[len - 1]; 
            //ta tiến hành xem xét độ dài của tiền tố nằm phía trước 
            //Mình lấy độ dài len thành độ dài của đoạn nằm trước đó 
            //Ta làm vậy để ta xem xét tiền tố có độ dài len phía trước lấy thêm phần tử i thỏa mãn không 
            else {
                lps[i] = 0; 
                ++i; 
            }
        }
    }
    return lps; 
}
int kmpSearch(vector<int> lps, string T, string s) 
{
    //Ta dung ki thuat 2 con tro 
    int i = 0; 
    int d = 0; //bien dem 
    int j = 0; //con tro dung cho chuoi S 
    while (i < T.size()) 
    {
        if (T[i] == s[j])  //khi giong nhau thi truot len 
        {
            ++i; 
            ++j; 
            if (j == s.size()) {
                ++d; 
                j = lps[j - 1]; 
            }
        }
        else //Neu xay ra su sai khac
        {
            if (j != 0) j = lps[j-1];  //dua no ve lai cai lps ở phía trước của nó
            else ++i; 
            //tang thang i len de bat dau 1 chuoi moi vi khogn the dua ve lps truoc do 
        }
    }
    return d; 
}
int main() 
{
    string s; 
    cin>>s; 
    vector<int> lps = LPS(s);  //Tao tien to tren chuoi can tim kiem 
    for (auto x : lps) cout<<x<<" ";  cout<<endl; 
    string T; 
    cin>>T;
    int d = kmpSearch(lps,T,s); 
    cout<<d; 
}