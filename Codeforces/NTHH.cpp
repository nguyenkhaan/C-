 #include <iostream>
#include <bits/stdc++.h>
using namespace std; 
map<int,int> ngoac;
map<string,int> nguyen_to;  
string s; 
int c; 
//Tìm vị trí của các cặp dấu ngoặc 
void tim_ngoac(char *ch,int i) //Tìm vị trí các dấu ngoặc trong cthh
{
    int d = i; 
    *(ch+i)= 'a';  //Du the nao thi con tro van tro toi o dau tien chu khong bi tao ban sao
    while (*(ch+i)!=')')
    {
        i++; 
        if (*(ch+i) == '(') tim_ngoac(ch,i); 
        if (*(ch+i) == ')')
        {
            *(ch+i) = 'x'; 
            c = i; 
            break; 
        }
    }
    ngoac[d] = c; 
}
void tao_nguyen_to()  //Cập nhật giá trị của các nguyên tố 
{
    nguyen_to.insert({"C",12}); 
    nguyen_to.insert({"H",1}); 
    nguyen_to.insert({"O",16}); 
    nguyen_to.insert({"Na",23}); 
    nguyen_to.insert({"Cu",64}); 
    nguyen_to.insert({"K",39}); 
    nguyen_to.insert({"Fe",56}); 
    nguyen_to.insert({"Al",27}); 
    nguyen_to.insert({"N",14}); 
    nguyen_to.insert({"S",32}); 
    nguyen_to.insert({"P",31}); 
    nguyen_to.insert({"Cl",35}); 
    nguyen_to.insert({"Ag",108}); 
    nguyen_to.insert({"Ba",137});
    nguyen_to.insert({"Be",7}); 
    nguyen_to.insert({"Mg",24}); 
    nguyen_to.insert({"Li",9}); 
    nguyen_to.insert({"Pb",207}); 
    nguyen_to.insert({"Ca",40}); 
    
}
void tao_ngoac()  //Lưu vị trí các dấu ngoặc vào map ngoac()
{
    int j = 0; 
    while (j<s.size()) 
    {
        if (s[j] == '(')
        {
            tim_ngoac(&s[0],j);   
            j = c; 
        }
        j++; 
    }   
}
string Tim_nguyen_to(int i) //Xử lí các nguyên tố giống như Na, Cu
{
    string st=""; 
    st = string(1,s[i]) + string(1,s[i+1]);  
    if (nguyen_to.find(st) != nguyen_to.end()) return st;
    st = ""; 
    st += string(1,s[i]); 
    return st; 
}
int tinh_gia_tri(int begin, int end) //Xử lí các giá trị nằm trong ngoặc
{
    int d = 1; 
    if (s[end+1]>='0' && s[end+1]<='9') d = atoi(&s[end+1]); 
    int temp = 0; 
    int i = begin + 1; 
    while (i<=end-1) 
    {
        if ((int)s[i] >= 65 && (int)s[i]<=90)
        {
            string st = Tim_nguyen_to(i); 
            i+= st.size(); 
            temp += nguyen_to[st]; 
        }
        else i++; 
    }
    return temp*d; 
}
void nguyen_tu_khoi() //Tính nguyên tử khối 
{
    int sum = 0;
    int sum1=0; 
    auto p = ngoac.end(); 
    int i; 
    for (i = ngoac.size()-1; i>=0; i--)
    {
        advance(p,-1); 
        int k = p->first; 
        int v = p->second; 
        sum += tinh_gia_tri(k,v); 
    }
    i = 0; 
    while (i<s.size()) 
    {
        if (ngoac.find(i) != ngoac.end())
        {
            i = ngoac[i]; 
        }
        //Tao them mot cai goi la tim nguyen to nua 

        if ((int)s[i] >= 65 && (int)s[i] <=90)
        {
            int d = 1; 
            //Thi dat lai if (s[i+1] >= '0' && s[i+1]<='9') d = atoi(&s[i+1]); 
            string st = Tim_nguyen_to(i); 
            i += st.size()-1; 
            if (s[i+1]>= '0' && s[i+1] <= '9') d = atoi(&s[i+1]); 
            sum += nguyen_to[st] * d; 
        }  
        i++; 
    } 
    cout<<sum; 
}
int main()
{
    cin>>s; 
    tao_nguyen_to(); 
    tao_ngoac(); 
    nguyen_tu_khoi(); 
    return 0; 
    
}