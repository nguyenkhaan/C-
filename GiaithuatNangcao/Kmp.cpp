#include <bits/stdc++.h>
using namespace std; 
vector<int> LPS(string s) 
{
    int i = 1; 
    int len = 0; //do dai tien to hien tai 
    vector<int> lps(s.size()); 
    lps[0] = 0; 
    while (i < s.size()) 
    {
        if (s[i] == s[len]) {
            ++len; 
            lps[i] = len; 
            ++i;  
        }
        else 
        {
            if (len != 0) len = lps[len - 1]; //Cap nhat do dai cua tien to truoc do 
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
        if (T[i] == s[j]) 
        {
            ++i; 
            ++j; 
            if (j == s.size()) {
                ++d; 
                j = lps[j - 1]; 
            }
        }
        else //Neu khong xay ra su sai khac
        {
            if (j != 0) j = lps[j-1]; 
            else ++i; 
        }
    }
    return d; 
}
int main() 
{
    string s; 
    cin>>s; 
    vector<int> lps = LPS(s); 
    for (auto x : lps) cout<<x<<" ";  cout<<endl; 
    string T; 
    cin>>T;
    int d = kmpSearch(lps,T,s); 
    cout<<d; 
}